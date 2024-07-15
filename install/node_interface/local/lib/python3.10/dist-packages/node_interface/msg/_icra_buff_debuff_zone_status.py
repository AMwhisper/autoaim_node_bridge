# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_interface:msg/IcraBuffDebuffZoneStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IcraBuffDebuffZoneStatus(type):
    """Metaclass of message 'IcraBuffDebuffZoneStatus'."""

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
                'node_interface.msg.IcraBuffDebuffZoneStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__icra_buff_debuff_zone_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__icra_buff_debuff_zone_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__icra_buff_debuff_zone_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__icra_buff_debuff_zone_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__icra_buff_debuff_zone_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IcraBuffDebuffZoneStatus(metaclass=Metaclass_IcraBuffDebuffZoneStatus):
    """Message class 'IcraBuffDebuffZoneStatus'."""

    __slots__ = [
        '_f1_zone_status',
        '_f1_zone_buff_debuff_status',
        '_f2_zone_status',
        '_f2_zone_buff_debuff_status',
        '_f3_zone_status',
        '_f3_zone_buff_debuff_status',
        '_f4_zone_status',
        '_f4_zone_buff_debuff_status',
        '_f5_zone_status',
        '_f5_zone_buff_debuff_status',
        '_f6_zone_status',
        '_f6_zone_buff_debuff_status',
        '_red1_bullet_left',
        '_red2_bullet_left',
        '_blue1_bullet_left',
        '_blue2_bullet_left',
    ]

    _fields_and_field_types = {
        'f1_zone_status': 'uint8',
        'f1_zone_buff_debuff_status': 'uint8',
        'f2_zone_status': 'uint8',
        'f2_zone_buff_debuff_status': 'uint8',
        'f3_zone_status': 'uint8',
        'f3_zone_buff_debuff_status': 'uint8',
        'f4_zone_status': 'uint8',
        'f4_zone_buff_debuff_status': 'uint8',
        'f5_zone_status': 'uint8',
        'f5_zone_buff_debuff_status': 'uint8',
        'f6_zone_status': 'uint8',
        'f6_zone_buff_debuff_status': 'uint8',
        'red1_bullet_left': 'uint16',
        'red2_bullet_left': 'uint16',
        'blue1_bullet_left': 'uint16',
        'blue2_bullet_left': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.f1_zone_status = kwargs.get('f1_zone_status', int())
        self.f1_zone_buff_debuff_status = kwargs.get('f1_zone_buff_debuff_status', int())
        self.f2_zone_status = kwargs.get('f2_zone_status', int())
        self.f2_zone_buff_debuff_status = kwargs.get('f2_zone_buff_debuff_status', int())
        self.f3_zone_status = kwargs.get('f3_zone_status', int())
        self.f3_zone_buff_debuff_status = kwargs.get('f3_zone_buff_debuff_status', int())
        self.f4_zone_status = kwargs.get('f4_zone_status', int())
        self.f4_zone_buff_debuff_status = kwargs.get('f4_zone_buff_debuff_status', int())
        self.f5_zone_status = kwargs.get('f5_zone_status', int())
        self.f5_zone_buff_debuff_status = kwargs.get('f5_zone_buff_debuff_status', int())
        self.f6_zone_status = kwargs.get('f6_zone_status', int())
        self.f6_zone_buff_debuff_status = kwargs.get('f6_zone_buff_debuff_status', int())
        self.red1_bullet_left = kwargs.get('red1_bullet_left', int())
        self.red2_bullet_left = kwargs.get('red2_bullet_left', int())
        self.blue1_bullet_left = kwargs.get('blue1_bullet_left', int())
        self.blue2_bullet_left = kwargs.get('blue2_bullet_left', int())

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
        if self.f1_zone_status != other.f1_zone_status:
            return False
        if self.f1_zone_buff_debuff_status != other.f1_zone_buff_debuff_status:
            return False
        if self.f2_zone_status != other.f2_zone_status:
            return False
        if self.f2_zone_buff_debuff_status != other.f2_zone_buff_debuff_status:
            return False
        if self.f3_zone_status != other.f3_zone_status:
            return False
        if self.f3_zone_buff_debuff_status != other.f3_zone_buff_debuff_status:
            return False
        if self.f4_zone_status != other.f4_zone_status:
            return False
        if self.f4_zone_buff_debuff_status != other.f4_zone_buff_debuff_status:
            return False
        if self.f5_zone_status != other.f5_zone_status:
            return False
        if self.f5_zone_buff_debuff_status != other.f5_zone_buff_debuff_status:
            return False
        if self.f6_zone_status != other.f6_zone_status:
            return False
        if self.f6_zone_buff_debuff_status != other.f6_zone_buff_debuff_status:
            return False
        if self.red1_bullet_left != other.red1_bullet_left:
            return False
        if self.red2_bullet_left != other.red2_bullet_left:
            return False
        if self.blue1_bullet_left != other.blue1_bullet_left:
            return False
        if self.blue2_bullet_left != other.blue2_bullet_left:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def f1_zone_status(self):
        """Message field 'f1_zone_status'."""
        return self._f1_zone_status

    @f1_zone_status.setter
    def f1_zone_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'f1_zone_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'f1_zone_status' field must be an unsigned integer in [0, 255]"
        self._f1_zone_status = value

    @builtins.property
    def f1_zone_buff_debuff_status(self):
        """Message field 'f1_zone_buff_debuff_status'."""
        return self._f1_zone_buff_debuff_status

    @f1_zone_buff_debuff_status.setter
    def f1_zone_buff_debuff_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'f1_zone_buff_debuff_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'f1_zone_buff_debuff_status' field must be an unsigned integer in [0, 255]"
        self._f1_zone_buff_debuff_status = value

    @builtins.property
    def f2_zone_status(self):
        """Message field 'f2_zone_status'."""
        return self._f2_zone_status

    @f2_zone_status.setter
    def f2_zone_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'f2_zone_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'f2_zone_status' field must be an unsigned integer in [0, 255]"
        self._f2_zone_status = value

    @builtins.property
    def f2_zone_buff_debuff_status(self):
        """Message field 'f2_zone_buff_debuff_status'."""
        return self._f2_zone_buff_debuff_status

    @f2_zone_buff_debuff_status.setter
    def f2_zone_buff_debuff_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'f2_zone_buff_debuff_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'f2_zone_buff_debuff_status' field must be an unsigned integer in [0, 255]"
        self._f2_zone_buff_debuff_status = value

    @builtins.property
    def f3_zone_status(self):
        """Message field 'f3_zone_status'."""
        return self._f3_zone_status

    @f3_zone_status.setter
    def f3_zone_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'f3_zone_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'f3_zone_status' field must be an unsigned integer in [0, 255]"
        self._f3_zone_status = value

    @builtins.property
    def f3_zone_buff_debuff_status(self):
        """Message field 'f3_zone_buff_debuff_status'."""
        return self._f3_zone_buff_debuff_status

    @f3_zone_buff_debuff_status.setter
    def f3_zone_buff_debuff_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'f3_zone_buff_debuff_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'f3_zone_buff_debuff_status' field must be an unsigned integer in [0, 255]"
        self._f3_zone_buff_debuff_status = value

    @builtins.property
    def f4_zone_status(self):
        """Message field 'f4_zone_status'."""
        return self._f4_zone_status

    @f4_zone_status.setter
    def f4_zone_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'f4_zone_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'f4_zone_status' field must be an unsigned integer in [0, 255]"
        self._f4_zone_status = value

    @builtins.property
    def f4_zone_buff_debuff_status(self):
        """Message field 'f4_zone_buff_debuff_status'."""
        return self._f4_zone_buff_debuff_status

    @f4_zone_buff_debuff_status.setter
    def f4_zone_buff_debuff_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'f4_zone_buff_debuff_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'f4_zone_buff_debuff_status' field must be an unsigned integer in [0, 255]"
        self._f4_zone_buff_debuff_status = value

    @builtins.property
    def f5_zone_status(self):
        """Message field 'f5_zone_status'."""
        return self._f5_zone_status

    @f5_zone_status.setter
    def f5_zone_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'f5_zone_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'f5_zone_status' field must be an unsigned integer in [0, 255]"
        self._f5_zone_status = value

    @builtins.property
    def f5_zone_buff_debuff_status(self):
        """Message field 'f5_zone_buff_debuff_status'."""
        return self._f5_zone_buff_debuff_status

    @f5_zone_buff_debuff_status.setter
    def f5_zone_buff_debuff_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'f5_zone_buff_debuff_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'f5_zone_buff_debuff_status' field must be an unsigned integer in [0, 255]"
        self._f5_zone_buff_debuff_status = value

    @builtins.property
    def f6_zone_status(self):
        """Message field 'f6_zone_status'."""
        return self._f6_zone_status

    @f6_zone_status.setter
    def f6_zone_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'f6_zone_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'f6_zone_status' field must be an unsigned integer in [0, 255]"
        self._f6_zone_status = value

    @builtins.property
    def f6_zone_buff_debuff_status(self):
        """Message field 'f6_zone_buff_debuff_status'."""
        return self._f6_zone_buff_debuff_status

    @f6_zone_buff_debuff_status.setter
    def f6_zone_buff_debuff_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'f6_zone_buff_debuff_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'f6_zone_buff_debuff_status' field must be an unsigned integer in [0, 255]"
        self._f6_zone_buff_debuff_status = value

    @builtins.property
    def red1_bullet_left(self):
        """Message field 'red1_bullet_left'."""
        return self._red1_bullet_left

    @red1_bullet_left.setter
    def red1_bullet_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red1_bullet_left' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red1_bullet_left' field must be an unsigned integer in [0, 65535]"
        self._red1_bullet_left = value

    @builtins.property
    def red2_bullet_left(self):
        """Message field 'red2_bullet_left'."""
        return self._red2_bullet_left

    @red2_bullet_left.setter
    def red2_bullet_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red2_bullet_left' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red2_bullet_left' field must be an unsigned integer in [0, 65535]"
        self._red2_bullet_left = value

    @builtins.property
    def blue1_bullet_left(self):
        """Message field 'blue1_bullet_left'."""
        return self._blue1_bullet_left

    @blue1_bullet_left.setter
    def blue1_bullet_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue1_bullet_left' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue1_bullet_left' field must be an unsigned integer in [0, 65535]"
        self._blue1_bullet_left = value

    @builtins.property
    def blue2_bullet_left(self):
        """Message field 'blue2_bullet_left'."""
        return self._blue2_bullet_left

    @blue2_bullet_left.setter
    def blue2_bullet_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue2_bullet_left' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue2_bullet_left' field must be an unsigned integer in [0, 65535]"
        self._blue2_bullet_left = value
