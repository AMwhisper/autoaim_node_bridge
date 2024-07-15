# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_interface:srv/SendClientCustomGraphicDelete.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SendClientCustomGraphicDelete_Request(type):
    """Metaclass of message 'SendClientCustomGraphicDelete_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('node_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'node_interface.srv.SendClientCustomGraphicDelete_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_client_custom_graphic_delete__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_client_custom_graphic_delete__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_client_custom_graphic_delete__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_client_custom_graphic_delete__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_client_custom_graphic_delete__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendClientCustomGraphicDelete_Request(metaclass=Metaclass_SendClientCustomGraphicDelete_Request):
    """Message class 'SendClientCustomGraphicDelete_Request'."""

    __slots__ = [
        '_data_cmd_id',
        '_send_id',
        '_receiver_id',
        '_operate_tpye',
        '_layer',
    ]

    _fields_and_field_types = {
        'data_cmd_id': 'uint16',
        'send_id': 'uint16',
        'receiver_id': 'uint16',
        'operate_tpye': 'uint8',
        'layer': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.data_cmd_id = kwargs.get('data_cmd_id', int())
        self.send_id = kwargs.get('send_id', int())
        self.receiver_id = kwargs.get('receiver_id', int())
        self.operate_tpye = kwargs.get('operate_tpye', int())
        self.layer = kwargs.get('layer', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.data_cmd_id != other.data_cmd_id:
            return False
        if self.send_id != other.send_id:
            return False
        if self.receiver_id != other.receiver_id:
            return False
        if self.operate_tpye != other.operate_tpye:
            return False
        if self.layer != other.layer:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def data_cmd_id(self):
        """Message field 'data_cmd_id'."""
        return self._data_cmd_id

    @data_cmd_id.setter
    def data_cmd_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data_cmd_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'data_cmd_id' field must be an unsigned integer in [0, 65535]"
        self._data_cmd_id = value

    @builtins.property
    def send_id(self):
        """Message field 'send_id'."""
        return self._send_id

    @send_id.setter
    def send_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'send_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'send_id' field must be an unsigned integer in [0, 65535]"
        self._send_id = value

    @builtins.property
    def receiver_id(self):
        """Message field 'receiver_id'."""
        return self._receiver_id

    @receiver_id.setter
    def receiver_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'receiver_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'receiver_id' field must be an unsigned integer in [0, 65535]"
        self._receiver_id = value

    @builtins.property
    def operate_tpye(self):
        """Message field 'operate_tpye'."""
        return self._operate_tpye

    @operate_tpye.setter
    def operate_tpye(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operate_tpye' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'operate_tpye' field must be an unsigned integer in [0, 255]"
        self._operate_tpye = value

    @builtins.property
    def layer(self):
        """Message field 'layer'."""
        return self._layer

    @layer.setter
    def layer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'layer' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'layer' field must be an unsigned integer in [0, 255]"
        self._layer = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SendClientCustomGraphicDelete_Response(type):
    """Metaclass of message 'SendClientCustomGraphicDelete_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('node_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'node_interface.srv.SendClientCustomGraphicDelete_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_client_custom_graphic_delete__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_client_custom_graphic_delete__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_client_custom_graphic_delete__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_client_custom_graphic_delete__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_client_custom_graphic_delete__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendClientCustomGraphicDelete_Response(metaclass=Metaclass_SendClientCustomGraphicDelete_Response):
    """Message class 'SendClientCustomGraphicDelete_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'result' field must be of type 'str'"
        self._result = value


class Metaclass_SendClientCustomGraphicDelete(type):
    """Metaclass of service 'SendClientCustomGraphicDelete'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('node_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'node_interface.srv.SendClientCustomGraphicDelete')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__send_client_custom_graphic_delete

            from node_interface.srv import _send_client_custom_graphic_delete
            if _send_client_custom_graphic_delete.Metaclass_SendClientCustomGraphicDelete_Request._TYPE_SUPPORT is None:
                _send_client_custom_graphic_delete.Metaclass_SendClientCustomGraphicDelete_Request.__import_type_support__()
            if _send_client_custom_graphic_delete.Metaclass_SendClientCustomGraphicDelete_Response._TYPE_SUPPORT is None:
                _send_client_custom_graphic_delete.Metaclass_SendClientCustomGraphicDelete_Response.__import_type_support__()


class SendClientCustomGraphicDelete(metaclass=Metaclass_SendClientCustomGraphicDelete):
    from node_interface.srv._send_client_custom_graphic_delete import SendClientCustomGraphicDelete_Request as Request
    from node_interface.srv._send_client_custom_graphic_delete import SendClientCustomGraphicDelete_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')