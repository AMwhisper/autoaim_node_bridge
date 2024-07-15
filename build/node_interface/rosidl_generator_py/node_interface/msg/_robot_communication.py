# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_interface:msg/RobotCommunication.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotCommunication(type):
    """Metaclass of message 'RobotCommunication'."""

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
                'node_interface.msg.RobotCommunication')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_communication
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_communication
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_communication
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_communication
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_communication

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotCommunication(metaclass=Metaclass_RobotCommunication):
    """Message class 'RobotCommunication'."""

    __slots__ = [
        '_data_cmd_id',
        '_send_id',
        '_receiver_id',
        '_data1',
        '_data2',
        '_data3',
        '_data4',
    ]

    _fields_and_field_types = {
        'data_cmd_id': 'uint16',
        'send_id': 'uint16',
        'receiver_id': 'uint16',
        'data1': 'int32',
        'data2': 'int32',
        'data3': 'int32',
        'data4': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.data_cmd_id = kwargs.get('data_cmd_id', int())
        self.send_id = kwargs.get('send_id', int())
        self.receiver_id = kwargs.get('receiver_id', int())
        self.data1 = kwargs.get('data1', int())
        self.data2 = kwargs.get('data2', int())
        self.data3 = kwargs.get('data3', int())
        self.data4 = kwargs.get('data4', int())

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
        if self.data1 != other.data1:
            return False
        if self.data2 != other.data2:
            return False
        if self.data3 != other.data3:
            return False
        if self.data4 != other.data4:
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
    def data1(self):
        """Message field 'data1'."""
        return self._data1

    @data1.setter
    def data1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'data1' field must be an integer in [-2147483648, 2147483647]"
        self._data1 = value

    @builtins.property
    def data2(self):
        """Message field 'data2'."""
        return self._data2

    @data2.setter
    def data2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'data2' field must be an integer in [-2147483648, 2147483647]"
        self._data2 = value

    @builtins.property
    def data3(self):
        """Message field 'data3'."""
        return self._data3

    @data3.setter
    def data3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'data3' field must be an integer in [-2147483648, 2147483647]"
        self._data3 = value

    @builtins.property
    def data4(self):
        """Message field 'data4'."""
        return self._data4

    @data4.setter
    def data4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data4' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'data4' field must be an integer in [-2147483648, 2147483647]"
        self._data4 = value
