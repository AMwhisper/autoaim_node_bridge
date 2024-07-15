# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_interface:msg/DartClientCmds.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DartClientCmds(type):
    """Metaclass of message 'DartClientCmds'."""

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
                'node_interface.msg.DartClientCmds')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dart_client_cmds
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dart_client_cmds
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dart_client_cmds
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dart_client_cmds
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dart_client_cmds

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DartClientCmds(metaclass=Metaclass_DartClientCmds):
    """Message class 'DartClientCmds'."""

    __slots__ = [
        '_dart_launch_opening_status',
        '_dart_attack_target',
        '_target_change_time',
        '_first_dart_speed',
        '_second_dart_speed',
        '_third_dart_speed',
        '_fourth_dart_speed',
        '_last_dart_launch_time',
        '_operate_launch_cmd_time',
    ]

    _fields_and_field_types = {
        'dart_launch_opening_status': 'uint8',
        'dart_attack_target': 'uint8',
        'target_change_time': 'uint16',
        'first_dart_speed': 'uint8',
        'second_dart_speed': 'uint8',
        'third_dart_speed': 'uint8',
        'fourth_dart_speed': 'uint8',
        'last_dart_launch_time': 'uint16',
        'operate_launch_cmd_time': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dart_launch_opening_status = kwargs.get('dart_launch_opening_status', int())
        self.dart_attack_target = kwargs.get('dart_attack_target', int())
        self.target_change_time = kwargs.get('target_change_time', int())
        self.first_dart_speed = kwargs.get('first_dart_speed', int())
        self.second_dart_speed = kwargs.get('second_dart_speed', int())
        self.third_dart_speed = kwargs.get('third_dart_speed', int())
        self.fourth_dart_speed = kwargs.get('fourth_dart_speed', int())
        self.last_dart_launch_time = kwargs.get('last_dart_launch_time', int())
        self.operate_launch_cmd_time = kwargs.get('operate_launch_cmd_time', int())

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
        if self.dart_launch_opening_status != other.dart_launch_opening_status:
            return False
        if self.dart_attack_target != other.dart_attack_target:
            return False
        if self.target_change_time != other.target_change_time:
            return False
        if self.first_dart_speed != other.first_dart_speed:
            return False
        if self.second_dart_speed != other.second_dart_speed:
            return False
        if self.third_dart_speed != other.third_dart_speed:
            return False
        if self.fourth_dart_speed != other.fourth_dart_speed:
            return False
        if self.last_dart_launch_time != other.last_dart_launch_time:
            return False
        if self.operate_launch_cmd_time != other.operate_launch_cmd_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def dart_launch_opening_status(self):
        """Message field 'dart_launch_opening_status'."""
        return self._dart_launch_opening_status

    @dart_launch_opening_status.setter
    def dart_launch_opening_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dart_launch_opening_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dart_launch_opening_status' field must be an unsigned integer in [0, 255]"
        self._dart_launch_opening_status = value

    @builtins.property
    def dart_attack_target(self):
        """Message field 'dart_attack_target'."""
        return self._dart_attack_target

    @dart_attack_target.setter
    def dart_attack_target(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dart_attack_target' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dart_attack_target' field must be an unsigned integer in [0, 255]"
        self._dart_attack_target = value

    @builtins.property
    def target_change_time(self):
        """Message field 'target_change_time'."""
        return self._target_change_time

    @target_change_time.setter
    def target_change_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_change_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'target_change_time' field must be an unsigned integer in [0, 65535]"
        self._target_change_time = value

    @builtins.property
    def first_dart_speed(self):
        """Message field 'first_dart_speed'."""
        return self._first_dart_speed

    @first_dart_speed.setter
    def first_dart_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'first_dart_speed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'first_dart_speed' field must be an unsigned integer in [0, 255]"
        self._first_dart_speed = value

    @builtins.property
    def second_dart_speed(self):
        """Message field 'second_dart_speed'."""
        return self._second_dart_speed

    @second_dart_speed.setter
    def second_dart_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'second_dart_speed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'second_dart_speed' field must be an unsigned integer in [0, 255]"
        self._second_dart_speed = value

    @builtins.property
    def third_dart_speed(self):
        """Message field 'third_dart_speed'."""
        return self._third_dart_speed

    @third_dart_speed.setter
    def third_dart_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'third_dart_speed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'third_dart_speed' field must be an unsigned integer in [0, 255]"
        self._third_dart_speed = value

    @builtins.property
    def fourth_dart_speed(self):
        """Message field 'fourth_dart_speed'."""
        return self._fourth_dart_speed

    @fourth_dart_speed.setter
    def fourth_dart_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fourth_dart_speed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fourth_dart_speed' field must be an unsigned integer in [0, 255]"
        self._fourth_dart_speed = value

    @builtins.property
    def last_dart_launch_time(self):
        """Message field 'last_dart_launch_time'."""
        return self._last_dart_launch_time

    @last_dart_launch_time.setter
    def last_dart_launch_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_dart_launch_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'last_dart_launch_time' field must be an unsigned integer in [0, 65535]"
        self._last_dart_launch_time = value

    @builtins.property
    def operate_launch_cmd_time(self):
        """Message field 'operate_launch_cmd_time'."""
        return self._operate_launch_cmd_time

    @operate_launch_cmd_time.setter
    def operate_launch_cmd_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operate_launch_cmd_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'operate_launch_cmd_time' field must be an unsigned integer in [0, 65535]"
        self._operate_launch_cmd_time = value
