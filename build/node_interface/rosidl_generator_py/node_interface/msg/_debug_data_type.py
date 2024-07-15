# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_interface:msg/DebugDataType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DebugDataType(type):
    """Metaclass of message 'DebugDataType'."""

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
                'node_interface.msg.DebugDataType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__debug_data_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__debug_data_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__debug_data_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__debug_data_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__debug_data_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DebugDataType(metaclass=Metaclass_DebugDataType):
    """Message class 'DebugDataType'."""

    __slots__ = [
        '_debug1',
        '_debug2',
        '_debug3',
        '_debug4',
        '_debug5',
        '_debug6',
        '_debug7',
        '_debug8',
    ]

    _fields_and_field_types = {
        'debug1': 'int32',
        'debug2': 'int32',
        'debug3': 'int32',
        'debug4': 'int32',
        'debug5': 'int32',
        'debug6': 'int32',
        'debug7': 'int32',
        'debug8': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.debug1 = kwargs.get('debug1', int())
        self.debug2 = kwargs.get('debug2', int())
        self.debug3 = kwargs.get('debug3', int())
        self.debug4 = kwargs.get('debug4', int())
        self.debug5 = kwargs.get('debug5', int())
        self.debug6 = kwargs.get('debug6', int())
        self.debug7 = kwargs.get('debug7', int())
        self.debug8 = kwargs.get('debug8', int())

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
        if self.debug1 != other.debug1:
            return False
        if self.debug2 != other.debug2:
            return False
        if self.debug3 != other.debug3:
            return False
        if self.debug4 != other.debug4:
            return False
        if self.debug5 != other.debug5:
            return False
        if self.debug6 != other.debug6:
            return False
        if self.debug7 != other.debug7:
            return False
        if self.debug8 != other.debug8:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def debug1(self):
        """Message field 'debug1'."""
        return self._debug1

    @debug1.setter
    def debug1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'debug1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'debug1' field must be an integer in [-2147483648, 2147483647]"
        self._debug1 = value

    @builtins.property
    def debug2(self):
        """Message field 'debug2'."""
        return self._debug2

    @debug2.setter
    def debug2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'debug2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'debug2' field must be an integer in [-2147483648, 2147483647]"
        self._debug2 = value

    @builtins.property
    def debug3(self):
        """Message field 'debug3'."""
        return self._debug3

    @debug3.setter
    def debug3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'debug3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'debug3' field must be an integer in [-2147483648, 2147483647]"
        self._debug3 = value

    @builtins.property
    def debug4(self):
        """Message field 'debug4'."""
        return self._debug4

    @debug4.setter
    def debug4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'debug4' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'debug4' field must be an integer in [-2147483648, 2147483647]"
        self._debug4 = value

    @builtins.property
    def debug5(self):
        """Message field 'debug5'."""
        return self._debug5

    @debug5.setter
    def debug5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'debug5' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'debug5' field must be an integer in [-2147483648, 2147483647]"
        self._debug5 = value

    @builtins.property
    def debug6(self):
        """Message field 'debug6'."""
        return self._debug6

    @debug6.setter
    def debug6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'debug6' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'debug6' field must be an integer in [-2147483648, 2147483647]"
        self._debug6 = value

    @builtins.property
    def debug7(self):
        """Message field 'debug7'."""
        return self._debug7

    @debug7.setter
    def debug7(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'debug7' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'debug7' field must be an integer in [-2147483648, 2147483647]"
        self._debug7 = value

    @builtins.property
    def debug8(self):
        """Message field 'debug8'."""
        return self._debug8

    @debug8.setter
    def debug8(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'debug8' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'debug8' field must be an integer in [-2147483648, 2147483647]"
        self._debug8 = value
