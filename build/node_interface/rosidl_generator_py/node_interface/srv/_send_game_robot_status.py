# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_interface:srv/SendGameRobotStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SendGameRobotStatus_Request(type):
    """Metaclass of message 'SendGameRobotStatus_Request'."""

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
                'node_interface.srv.SendGameRobotStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_game_robot_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_game_robot_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_game_robot_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_game_robot_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_game_robot_status__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendGameRobotStatus_Request(metaclass=Metaclass_SendGameRobotStatus_Request):
    """Message class 'SendGameRobotStatus_Request'."""

    __slots__ = [
        '_robot_id',
        '_robot_level',
        '_remain_hp',
        '_max_hp',
        '_shooter_id1_17mm_cooling_rate',
        '_shooter_id1_17mm_cooling_limit',
        '_shooter_id1_17mm_speed_limit',
        '_shooter_id2_17mm_cooling_rate',
        '_shooter_id2_17mm_cooling_limit',
        '_shooter_id2_17mm_speed_limit',
        '_shooter_id1_42mm_cooling_rate',
        '_shooter_id1_42mm_cooling_limit',
        '_shooter_id1_42mm_speed_limit',
        '_chassis_power_limit',
        '_mains_power_gimbal_output',
        '_mains_power_chassis_output',
        '_mains_power_shooter_output',
    ]

    _fields_and_field_types = {
        'robot_id': 'uint8',
        'robot_level': 'uint8',
        'remain_hp': 'uint16',
        'max_hp': 'uint16',
        'shooter_id1_17mm_cooling_rate': 'uint16',
        'shooter_id1_17mm_cooling_limit': 'uint16',
        'shooter_id1_17mm_speed_limit': 'uint16',
        'shooter_id2_17mm_cooling_rate': 'uint16',
        'shooter_id2_17mm_cooling_limit': 'uint16',
        'shooter_id2_17mm_speed_limit': 'uint16',
        'shooter_id1_42mm_cooling_rate': 'uint16',
        'shooter_id1_42mm_cooling_limit': 'uint16',
        'shooter_id1_42mm_speed_limit': 'uint16',
        'chassis_power_limit': 'uint16',
        'mains_power_gimbal_output': 'uint8',
        'mains_power_chassis_output': 'uint8',
        'mains_power_shooter_output': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_id = kwargs.get('robot_id', int())
        self.robot_level = kwargs.get('robot_level', int())
        self.remain_hp = kwargs.get('remain_hp', int())
        self.max_hp = kwargs.get('max_hp', int())
        self.shooter_id1_17mm_cooling_rate = kwargs.get('shooter_id1_17mm_cooling_rate', int())
        self.shooter_id1_17mm_cooling_limit = kwargs.get('shooter_id1_17mm_cooling_limit', int())
        self.shooter_id1_17mm_speed_limit = kwargs.get('shooter_id1_17mm_speed_limit', int())
        self.shooter_id2_17mm_cooling_rate = kwargs.get('shooter_id2_17mm_cooling_rate', int())
        self.shooter_id2_17mm_cooling_limit = kwargs.get('shooter_id2_17mm_cooling_limit', int())
        self.shooter_id2_17mm_speed_limit = kwargs.get('shooter_id2_17mm_speed_limit', int())
        self.shooter_id1_42mm_cooling_rate = kwargs.get('shooter_id1_42mm_cooling_rate', int())
        self.shooter_id1_42mm_cooling_limit = kwargs.get('shooter_id1_42mm_cooling_limit', int())
        self.shooter_id1_42mm_speed_limit = kwargs.get('shooter_id1_42mm_speed_limit', int())
        self.chassis_power_limit = kwargs.get('chassis_power_limit', int())
        self.mains_power_gimbal_output = kwargs.get('mains_power_gimbal_output', int())
        self.mains_power_chassis_output = kwargs.get('mains_power_chassis_output', int())
        self.mains_power_shooter_output = kwargs.get('mains_power_shooter_output', int())

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
        if self.robot_id != other.robot_id:
            return False
        if self.robot_level != other.robot_level:
            return False
        if self.remain_hp != other.remain_hp:
            return False
        if self.max_hp != other.max_hp:
            return False
        if self.shooter_id1_17mm_cooling_rate != other.shooter_id1_17mm_cooling_rate:
            return False
        if self.shooter_id1_17mm_cooling_limit != other.shooter_id1_17mm_cooling_limit:
            return False
        if self.shooter_id1_17mm_speed_limit != other.shooter_id1_17mm_speed_limit:
            return False
        if self.shooter_id2_17mm_cooling_rate != other.shooter_id2_17mm_cooling_rate:
            return False
        if self.shooter_id2_17mm_cooling_limit != other.shooter_id2_17mm_cooling_limit:
            return False
        if self.shooter_id2_17mm_speed_limit != other.shooter_id2_17mm_speed_limit:
            return False
        if self.shooter_id1_42mm_cooling_rate != other.shooter_id1_42mm_cooling_rate:
            return False
        if self.shooter_id1_42mm_cooling_limit != other.shooter_id1_42mm_cooling_limit:
            return False
        if self.shooter_id1_42mm_speed_limit != other.shooter_id1_42mm_speed_limit:
            return False
        if self.chassis_power_limit != other.chassis_power_limit:
            return False
        if self.mains_power_gimbal_output != other.mains_power_gimbal_output:
            return False
        if self.mains_power_chassis_output != other.mains_power_chassis_output:
            return False
        if self.mains_power_shooter_output != other.mains_power_shooter_output:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robot_id(self):
        """Message field 'robot_id'."""
        return self._robot_id

    @robot_id.setter
    def robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'robot_id' field must be an unsigned integer in [0, 255]"
        self._robot_id = value

    @builtins.property
    def robot_level(self):
        """Message field 'robot_level'."""
        return self._robot_level

    @robot_level.setter
    def robot_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'robot_level' field must be an unsigned integer in [0, 255]"
        self._robot_level = value

    @builtins.property
    def remain_hp(self):
        """Message field 'remain_hp'."""
        return self._remain_hp

    @remain_hp.setter
    def remain_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remain_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'remain_hp' field must be an unsigned integer in [0, 65535]"
        self._remain_hp = value

    @builtins.property
    def max_hp(self):
        """Message field 'max_hp'."""
        return self._max_hp

    @max_hp.setter
    def max_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'max_hp' field must be an unsigned integer in [0, 65535]"
        self._max_hp = value

    @builtins.property
    def shooter_id1_17mm_cooling_rate(self):
        """Message field 'shooter_id1_17mm_cooling_rate'."""
        return self._shooter_id1_17mm_cooling_rate

    @shooter_id1_17mm_cooling_rate.setter
    def shooter_id1_17mm_cooling_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_id1_17mm_cooling_rate' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_id1_17mm_cooling_rate' field must be an unsigned integer in [0, 65535]"
        self._shooter_id1_17mm_cooling_rate = value

    @builtins.property
    def shooter_id1_17mm_cooling_limit(self):
        """Message field 'shooter_id1_17mm_cooling_limit'."""
        return self._shooter_id1_17mm_cooling_limit

    @shooter_id1_17mm_cooling_limit.setter
    def shooter_id1_17mm_cooling_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_id1_17mm_cooling_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_id1_17mm_cooling_limit' field must be an unsigned integer in [0, 65535]"
        self._shooter_id1_17mm_cooling_limit = value

    @builtins.property
    def shooter_id1_17mm_speed_limit(self):
        """Message field 'shooter_id1_17mm_speed_limit'."""
        return self._shooter_id1_17mm_speed_limit

    @shooter_id1_17mm_speed_limit.setter
    def shooter_id1_17mm_speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_id1_17mm_speed_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_id1_17mm_speed_limit' field must be an unsigned integer in [0, 65535]"
        self._shooter_id1_17mm_speed_limit = value

    @builtins.property
    def shooter_id2_17mm_cooling_rate(self):
        """Message field 'shooter_id2_17mm_cooling_rate'."""
        return self._shooter_id2_17mm_cooling_rate

    @shooter_id2_17mm_cooling_rate.setter
    def shooter_id2_17mm_cooling_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_id2_17mm_cooling_rate' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_id2_17mm_cooling_rate' field must be an unsigned integer in [0, 65535]"
        self._shooter_id2_17mm_cooling_rate = value

    @builtins.property
    def shooter_id2_17mm_cooling_limit(self):
        """Message field 'shooter_id2_17mm_cooling_limit'."""
        return self._shooter_id2_17mm_cooling_limit

    @shooter_id2_17mm_cooling_limit.setter
    def shooter_id2_17mm_cooling_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_id2_17mm_cooling_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_id2_17mm_cooling_limit' field must be an unsigned integer in [0, 65535]"
        self._shooter_id2_17mm_cooling_limit = value

    @builtins.property
    def shooter_id2_17mm_speed_limit(self):
        """Message field 'shooter_id2_17mm_speed_limit'."""
        return self._shooter_id2_17mm_speed_limit

    @shooter_id2_17mm_speed_limit.setter
    def shooter_id2_17mm_speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_id2_17mm_speed_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_id2_17mm_speed_limit' field must be an unsigned integer in [0, 65535]"
        self._shooter_id2_17mm_speed_limit = value

    @builtins.property
    def shooter_id1_42mm_cooling_rate(self):
        """Message field 'shooter_id1_42mm_cooling_rate'."""
        return self._shooter_id1_42mm_cooling_rate

    @shooter_id1_42mm_cooling_rate.setter
    def shooter_id1_42mm_cooling_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_id1_42mm_cooling_rate' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_id1_42mm_cooling_rate' field must be an unsigned integer in [0, 65535]"
        self._shooter_id1_42mm_cooling_rate = value

    @builtins.property
    def shooter_id1_42mm_cooling_limit(self):
        """Message field 'shooter_id1_42mm_cooling_limit'."""
        return self._shooter_id1_42mm_cooling_limit

    @shooter_id1_42mm_cooling_limit.setter
    def shooter_id1_42mm_cooling_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_id1_42mm_cooling_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_id1_42mm_cooling_limit' field must be an unsigned integer in [0, 65535]"
        self._shooter_id1_42mm_cooling_limit = value

    @builtins.property
    def shooter_id1_42mm_speed_limit(self):
        """Message field 'shooter_id1_42mm_speed_limit'."""
        return self._shooter_id1_42mm_speed_limit

    @shooter_id1_42mm_speed_limit.setter
    def shooter_id1_42mm_speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_id1_42mm_speed_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_id1_42mm_speed_limit' field must be an unsigned integer in [0, 65535]"
        self._shooter_id1_42mm_speed_limit = value

    @builtins.property
    def chassis_power_limit(self):
        """Message field 'chassis_power_limit'."""
        return self._chassis_power_limit

    @chassis_power_limit.setter
    def chassis_power_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chassis_power_limit' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'chassis_power_limit' field must be an unsigned integer in [0, 65535]"
        self._chassis_power_limit = value

    @builtins.property
    def mains_power_gimbal_output(self):
        """Message field 'mains_power_gimbal_output'."""
        return self._mains_power_gimbal_output

    @mains_power_gimbal_output.setter
    def mains_power_gimbal_output(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mains_power_gimbal_output' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mains_power_gimbal_output' field must be an unsigned integer in [0, 255]"
        self._mains_power_gimbal_output = value

    @builtins.property
    def mains_power_chassis_output(self):
        """Message field 'mains_power_chassis_output'."""
        return self._mains_power_chassis_output

    @mains_power_chassis_output.setter
    def mains_power_chassis_output(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mains_power_chassis_output' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mains_power_chassis_output' field must be an unsigned integer in [0, 255]"
        self._mains_power_chassis_output = value

    @builtins.property
    def mains_power_shooter_output(self):
        """Message field 'mains_power_shooter_output'."""
        return self._mains_power_shooter_output

    @mains_power_shooter_output.setter
    def mains_power_shooter_output(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mains_power_shooter_output' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mains_power_shooter_output' field must be an unsigned integer in [0, 255]"
        self._mains_power_shooter_output = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SendGameRobotStatus_Response(type):
    """Metaclass of message 'SendGameRobotStatus_Response'."""

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
                'node_interface.srv.SendGameRobotStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_game_robot_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_game_robot_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_game_robot_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_game_robot_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_game_robot_status__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendGameRobotStatus_Response(metaclass=Metaclass_SendGameRobotStatus_Response):
    """Message class 'SendGameRobotStatus_Response'."""

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


class Metaclass_SendGameRobotStatus(type):
    """Metaclass of service 'SendGameRobotStatus'."""

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
                'node_interface.srv.SendGameRobotStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__send_game_robot_status

            from node_interface.srv import _send_game_robot_status
            if _send_game_robot_status.Metaclass_SendGameRobotStatus_Request._TYPE_SUPPORT is None:
                _send_game_robot_status.Metaclass_SendGameRobotStatus_Request.__import_type_support__()
            if _send_game_robot_status.Metaclass_SendGameRobotStatus_Response._TYPE_SUPPORT is None:
                _send_game_robot_status.Metaclass_SendGameRobotStatus_Response.__import_type_support__()


class SendGameRobotStatus(metaclass=Metaclass_SendGameRobotStatus):
    from node_interface.srv._send_game_robot_status import SendGameRobotStatus_Request as Request
    from node_interface.srv._send_game_robot_status import SendGameRobotStatus_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
