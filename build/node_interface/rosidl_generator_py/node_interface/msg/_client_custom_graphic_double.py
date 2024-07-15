# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_interface:msg/ClientCustomGraphicDouble.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ClientCustomGraphicDouble(type):
    """Metaclass of message 'ClientCustomGraphicDouble'."""

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
                'node_interface.msg.ClientCustomGraphicDouble')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__client_custom_graphic_double
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__client_custom_graphic_double
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__client_custom_graphic_double
            cls._TYPE_SUPPORT = module.type_support_msg__msg__client_custom_graphic_double
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__client_custom_graphic_double

            from node_interface.msg import GraphicDataType
            if GraphicDataType.__class__._TYPE_SUPPORT is None:
                GraphicDataType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ClientCustomGraphicDouble(metaclass=Metaclass_ClientCustomGraphicDouble):
    """Message class 'ClientCustomGraphicDouble'."""

    __slots__ = [
        '_data_cmd_id',
        '_send_id',
        '_receiver_id',
        '_grapic_data_struct',
    ]

    _fields_and_field_types = {
        'data_cmd_id': 'uint16',
        'send_id': 'uint16',
        'receiver_id': 'uint16',
        'grapic_data_struct': 'node_interface/GraphicDataType[2]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['node_interface', 'msg'], 'GraphicDataType'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.data_cmd_id = kwargs.get('data_cmd_id', int())
        self.send_id = kwargs.get('send_id', int())
        self.receiver_id = kwargs.get('receiver_id', int())
        from node_interface.msg import GraphicDataType
        self.grapic_data_struct = kwargs.get(
            'grapic_data_struct',
            [GraphicDataType() for x in range(2)]
        )

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
        if self.grapic_data_struct != other.grapic_data_struct:
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
    def grapic_data_struct(self):
        """Message field 'grapic_data_struct'."""
        return self._grapic_data_struct

    @grapic_data_struct.setter
    def grapic_data_struct(self, value):
        if __debug__:
            from node_interface.msg import GraphicDataType
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, GraphicDataType) for v in value) and
                 True), \
                "The 'grapic_data_struct' field must be a set or sequence with length 2 and each value of type 'GraphicDataType'"
        self._grapic_data_struct = value
