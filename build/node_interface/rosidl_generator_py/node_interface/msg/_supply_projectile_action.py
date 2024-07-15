# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_interface:msg/SupplyProjectileAction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SupplyProjectileAction(type):
    """Metaclass of message 'SupplyProjectileAction'."""

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
                'node_interface.msg.SupplyProjectileAction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__supply_projectile_action
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__supply_projectile_action
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__supply_projectile_action
            cls._TYPE_SUPPORT = module.type_support_msg__msg__supply_projectile_action
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__supply_projectile_action

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SupplyProjectileAction(metaclass=Metaclass_SupplyProjectileAction):
    """Message class 'SupplyProjectileAction'."""

    __slots__ = [
        '_supply_projectile_id',
        '_supply_robot_id',
        '_supply_projectile_step',
        '_supply_projectile_num',
    ]

    _fields_and_field_types = {
        'supply_projectile_id': 'uint8',
        'supply_robot_id': 'uint8',
        'supply_projectile_step': 'uint8',
        'supply_projectile_num': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.supply_projectile_id = kwargs.get('supply_projectile_id', int())
        self.supply_robot_id = kwargs.get('supply_robot_id', int())
        self.supply_projectile_step = kwargs.get('supply_projectile_step', int())
        self.supply_projectile_num = kwargs.get('supply_projectile_num', int())

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
        if self.supply_projectile_id != other.supply_projectile_id:
            return False
        if self.supply_robot_id != other.supply_robot_id:
            return False
        if self.supply_projectile_step != other.supply_projectile_step:
            return False
        if self.supply_projectile_num != other.supply_projectile_num:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def supply_projectile_id(self):
        """Message field 'supply_projectile_id'."""
        return self._supply_projectile_id

    @supply_projectile_id.setter
    def supply_projectile_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'supply_projectile_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'supply_projectile_id' field must be an unsigned integer in [0, 255]"
        self._supply_projectile_id = value

    @builtins.property
    def supply_robot_id(self):
        """Message field 'supply_robot_id'."""
        return self._supply_robot_id

    @supply_robot_id.setter
    def supply_robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'supply_robot_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'supply_robot_id' field must be an unsigned integer in [0, 255]"
        self._supply_robot_id = value

    @builtins.property
    def supply_projectile_step(self):
        """Message field 'supply_projectile_step'."""
        return self._supply_projectile_step

    @supply_projectile_step.setter
    def supply_projectile_step(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'supply_projectile_step' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'supply_projectile_step' field must be an unsigned integer in [0, 255]"
        self._supply_projectile_step = value

    @builtins.property
    def supply_projectile_num(self):
        """Message field 'supply_projectile_num'."""
        return self._supply_projectile_num

    @supply_projectile_num.setter
    def supply_projectile_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'supply_projectile_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'supply_projectile_num' field must be an unsigned integer in [0, 255]"
        self._supply_projectile_num = value
