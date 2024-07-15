# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_interface:msg/PowerHeatData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PowerHeatData(type):
    """Metaclass of message 'PowerHeatData'."""

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
                'node_interface.msg.PowerHeatData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__power_heat_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__power_heat_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__power_heat_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__power_heat_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__power_heat_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PowerHeatData(metaclass=Metaclass_PowerHeatData):
    """Message class 'PowerHeatData'."""

    __slots__ = [
        '_chassis_volt',
        '_chassis_current',
        '_chassis_power',
        '_chassis_power_buffer',
        '_shooter_id1_17mm_cooling_heat',
        '_shooter_id2_17mm_cooling_heat',
        '_shooter_id1_42mm_cooling_heat',
    ]

    _fields_and_field_types = {
        'chassis_volt': 'uint16',
        'chassis_current': 'uint16',
        'chassis_power': 'float',
        'chassis_power_buffer': 'uint16',
        'shooter_id1_17mm_cooling_heat': 'uint16',
        'shooter_id2_17mm_cooling_heat': 'uint16',
        'shooter_id1_42mm_cooling_heat': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.chassis_volt = kwargs.get('chassis_volt', int())
        self.chassis_current = kwargs.get('chassis_current', int())
        self.chassis_power = kwargs.get('chassis_power', float())
        self.chassis_power_buffer = kwargs.get('chassis_power_buffer', int())
        self.shooter_id1_17mm_cooling_heat = kwargs.get('shooter_id1_17mm_cooling_heat', int())
        self.shooter_id2_17mm_cooling_heat = kwargs.get('shooter_id2_17mm_cooling_heat', int())
        self.shooter_id1_42mm_cooling_heat = kwargs.get('shooter_id1_42mm_cooling_heat', int())

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
        if self.chassis_volt != other.chassis_volt:
            return False
        if self.chassis_current != other.chassis_current:
            return False
        if self.chassis_power != other.chassis_power:
            return False
        if self.chassis_power_buffer != other.chassis_power_buffer:
            return False
        if self.shooter_id1_17mm_cooling_heat != other.shooter_id1_17mm_cooling_heat:
            return False
        if self.shooter_id2_17mm_cooling_heat != other.shooter_id2_17mm_cooling_heat:
            return False
        if self.shooter_id1_42mm_cooling_heat != other.shooter_id1_42mm_cooling_heat:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def chassis_volt(self):
        """Message field 'chassis_volt'."""
        return self._chassis_volt

    @chassis_volt.setter
    def chassis_volt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chassis_volt' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'chassis_volt' field must be an unsigned integer in [0, 65535]"
        self._chassis_volt = value

    @builtins.property
    def chassis_current(self):
        """Message field 'chassis_current'."""
        return self._chassis_current

    @chassis_current.setter
    def chassis_current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chassis_current' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'chassis_current' field must be an unsigned integer in [0, 65535]"
        self._chassis_current = value

    @builtins.property
    def chassis_power(self):
        """Message field 'chassis_power'."""
        return self._chassis_power

    @chassis_power.setter
    def chassis_power(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'chassis_power' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'chassis_power' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._chassis_power = value

    @builtins.property
    def chassis_power_buffer(self):
        """Message field 'chassis_power_buffer'."""
        return self._chassis_power_buffer

    @chassis_power_buffer.setter
    def chassis_power_buffer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chassis_power_buffer' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'chassis_power_buffer' field must be an unsigned integer in [0, 65535]"
        self._chassis_power_buffer = value

    @builtins.property
    def shooter_id1_17mm_cooling_heat(self):
        """Message field 'shooter_id1_17mm_cooling_heat'."""
        return self._shooter_id1_17mm_cooling_heat

    @shooter_id1_17mm_cooling_heat.setter
    def shooter_id1_17mm_cooling_heat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_id1_17mm_cooling_heat' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_id1_17mm_cooling_heat' field must be an unsigned integer in [0, 65535]"
        self._shooter_id1_17mm_cooling_heat = value

    @builtins.property
    def shooter_id2_17mm_cooling_heat(self):
        """Message field 'shooter_id2_17mm_cooling_heat'."""
        return self._shooter_id2_17mm_cooling_heat

    @shooter_id2_17mm_cooling_heat.setter
    def shooter_id2_17mm_cooling_heat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_id2_17mm_cooling_heat' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_id2_17mm_cooling_heat' field must be an unsigned integer in [0, 65535]"
        self._shooter_id2_17mm_cooling_heat = value

    @builtins.property
    def shooter_id1_42mm_cooling_heat(self):
        """Message field 'shooter_id1_42mm_cooling_heat'."""
        return self._shooter_id1_42mm_cooling_heat

    @shooter_id1_42mm_cooling_heat.setter
    def shooter_id1_42mm_cooling_heat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_id1_42mm_cooling_heat' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_id1_42mm_cooling_heat' field must be an unsigned integer in [0, 65535]"
        self._shooter_id1_42mm_cooling_heat = value
