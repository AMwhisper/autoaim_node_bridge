# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_interface:msg/RobotHurt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotHurt(type):
    """Metaclass of message 'RobotHurt'."""

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
                'node_interface.msg.RobotHurt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_hurt
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_hurt
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_hurt
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_hurt
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_hurt

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotHurt(metaclass=Metaclass_RobotHurt):
    """Message class 'RobotHurt'."""

    __slots__ = [
        '_armor_id',
        '_hurt_type',
    ]

    _fields_and_field_types = {
        'armor_id': 'uint8',
        'hurt_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.armor_id = kwargs.get('armor_id', int())
        self.hurt_type = kwargs.get('hurt_type', int())

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
        if self.armor_id != other.armor_id:
            return False
        if self.hurt_type != other.hurt_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def armor_id(self):
        """Message field 'armor_id'."""
        return self._armor_id

    @armor_id.setter
    def armor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'armor_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'armor_id' field must be an unsigned integer in [0, 255]"
        self._armor_id = value

    @builtins.property
    def hurt_type(self):
        """Message field 'hurt_type'."""
        return self._hurt_type

    @hurt_type.setter
    def hurt_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hurt_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hurt_type' field must be an unsigned integer in [0, 255]"
        self._hurt_type = value
