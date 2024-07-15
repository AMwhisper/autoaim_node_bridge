#!/usr/bin/env python3
import rclpy
import importlib
from rclpy.node import Node
from node_bridge_ros2 import protocol 
from node_bridge_ros2.bridge import NodeBridge
from node_bridge_ros2.protocol import NodeBridgeProtocol
from munch import munchify
from queue import Queue
from node_interface import msg, srv
class NodeBridgeROS2(Node):
    def __init__(self, port_type='serial', port=0):
        super().__init__('node_bridge')
        self.declare_parameter('port', '/dev/ttyACM0')
        port = self.get_parameter('port').get_parameter_value().string_value
        
        self._bridge = NodeBridge('serial', port=port)
        self._protocol_data = NodeBridgeProtocol()
        self._send_queue = Queue()
        self._seq = 0
        self._init_service()

        self._timer = self.create_timer(1/125, self._bridge_open_loop)
    
    def _bridge_open_loop(self):
        self._bridge.open(self._on_receive, send_queue=self._send_queue)

    def _on_receive(self, new_byte):
        result = self._protocol_data.update(new_byte)     

        if 'result' in result:
            result = result['result']
            #msg_module = importlib.import_module('node_bridge_ros2.msg')
            #message_type = getattr(msg_module, result['name'])
            message_type = getattr(msg, result['name'])
            pub = self.create_publisher(message_type, 'node_bridge/' + result['name'], 10)
            data = message_type()
            for (key, value) in result['data'].items():
                if hasattr(data, key):
                    setattr(data, key, value)
            if 'seq' in result['data']:
                del result['data']['seq']
            data = munchify(result['data'])
            pub.publish(data)

    def _init_service(self):
        # 从协议信息表中创建服务列表
        service_list = ['Send' + x for x, y in protocol.protocol_info_table.items() if 'id' in y]

        for service_name in service_list:
            #srv_module = importlib.import_module('node_bridge_ros2.srv')
            #service_type = getattr(srv_module, service_name) # 获取具体的服务类型  
            service_type = getattr(srv, service_name)          
            self.create_service(service_type, service_name, self._handle_service)
            


    def _handle_service(self, req, response):
        protocol_name = type(req).__name__[5:-7]  # 'SendProtocol' --> 'Protocol'
        protocol_info = protocol.protocol_info_table[protocol_name]
        data = protocol.create_protocol_data(protocol_name)
        
        # 遍历请求数据，将其填充到协议数据中
        for item in req.data:
            if item.key in protocol_info['struct']:
                data[item.key] = item.value
        
        self._seq = (self._seq + 1) % 256
        packet = protocol.pack(protocol_name, data, seq=self._seq)
        self._send_queue.put(packet)
        response.message = f'protocol {protocol_name} sent.'
        return response

def main(args=None):
    rclpy.init(args=args)
    node = NodeBridgeROS2()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
