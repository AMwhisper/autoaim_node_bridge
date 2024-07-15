# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_interface:srv/SendJointCalibration.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SendJointCalibration_Request(type):
    """Metaclass of message 'SendJointCalibration_Request'."""

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
                'node_interface.srv.SendJointCalibration_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_joint_calibration__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_joint_calibration__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_joint_calibration__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_joint_calibration__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_joint_calibration__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendJointCalibration_Request(metaclass=Metaclass_SendJointCalibration_Request):
    """Message class 'SendJointCalibration_Request'."""

    __slots__ = [
        '_state_code',
        '_base_joint_position',
        '_base_joint_speed',
        '_shoulder_joint_position',
        '_shoulder_joint_speed',
        '_elbow_joint_position',
        '_elbow_joint_speed',
        '_wrist_joint_1_position',
        '_wrist_joint_1_speed',
        '_wrist_joint_2_position',
        '_wrist_joint_2_speed',
    ]

    _fields_and_field_types = {
        'state_code': 'uint8',
        'base_joint_position': 'int16',
        'base_joint_speed': 'int16',
        'shoulder_joint_position': 'int16',
        'shoulder_joint_speed': 'int16',
        'elbow_joint_position': 'int16',
        'elbow_joint_speed': 'int16',
        'wrist_joint_1_position': 'int16',
        'wrist_joint_1_speed': 'int16',
        'wrist_joint_2_position': 'int16',
        'wrist_joint_2_speed': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state_code = kwargs.get('state_code', int())
        self.base_joint_position = kwargs.get('base_joint_position', int())
        self.base_joint_speed = kwargs.get('base_joint_speed', int())
        self.shoulder_joint_position = kwargs.get('shoulder_joint_position', int())
        self.shoulder_joint_speed = kwargs.get('shoulder_joint_speed', int())
        self.elbow_joint_position = kwargs.get('elbow_joint_position', int())
        self.elbow_joint_speed = kwargs.get('elbow_joint_speed', int())
        self.wrist_joint_1_position = kwargs.get('wrist_joint_1_position', int())
        self.wrist_joint_1_speed = kwargs.get('wrist_joint_1_speed', int())
        self.wrist_joint_2_position = kwargs.get('wrist_joint_2_position', int())
        self.wrist_joint_2_speed = kwargs.get('wrist_joint_2_speed', int())

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
        if self.state_code != other.state_code:
            return False
        if self.base_joint_position != other.base_joint_position:
            return False
        if self.base_joint_speed != other.base_joint_speed:
            return False
        if self.shoulder_joint_position != other.shoulder_joint_position:
            return False
        if self.shoulder_joint_speed != other.shoulder_joint_speed:
            return False
        if self.elbow_joint_position != other.elbow_joint_position:
            return False
        if self.elbow_joint_speed != other.elbow_joint_speed:
            return False
        if self.wrist_joint_1_position != other.wrist_joint_1_position:
            return False
        if self.wrist_joint_1_speed != other.wrist_joint_1_speed:
            return False
        if self.wrist_joint_2_position != other.wrist_joint_2_position:
            return False
        if self.wrist_joint_2_speed != other.wrist_joint_2_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state_code(self):
        """Message field 'state_code'."""
        return self._state_code

    @state_code.setter
    def state_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state_code' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state_code' field must be an unsigned integer in [0, 255]"
        self._state_code = value

    @builtins.property
    def base_joint_position(self):
        """Message field 'base_joint_position'."""
        return self._base_joint_position

    @base_joint_position.setter
    def base_joint_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'base_joint_position' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'base_joint_position' field must be an integer in [-32768, 32767]"
        self._base_joint_position = value

    @builtins.property
    def base_joint_speed(self):
        """Message field 'base_joint_speed'."""
        return self._base_joint_speed

    @base_joint_speed.setter
    def base_joint_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'base_joint_speed' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'base_joint_speed' field must be an integer in [-32768, 32767]"
        self._base_joint_speed = value

    @builtins.property
    def shoulder_joint_position(self):
        """Message field 'shoulder_joint_position'."""
        return self._shoulder_joint_position

    @shoulder_joint_position.setter
    def shoulder_joint_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shoulder_joint_position' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'shoulder_joint_position' field must be an integer in [-32768, 32767]"
        self._shoulder_joint_position = value

    @builtins.property
    def shoulder_joint_speed(self):
        """Message field 'shoulder_joint_speed'."""
        return self._shoulder_joint_speed

    @shoulder_joint_speed.setter
    def shoulder_joint_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shoulder_joint_speed' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'shoulder_joint_speed' field must be an integer in [-32768, 32767]"
        self._shoulder_joint_speed = value

    @builtins.property
    def elbow_joint_position(self):
        """Message field 'elbow_joint_position'."""
        return self._elbow_joint_position

    @elbow_joint_position.setter
    def elbow_joint_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'elbow_joint_position' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'elbow_joint_position' field must be an integer in [-32768, 32767]"
        self._elbow_joint_position = value

    @builtins.property
    def elbow_joint_speed(self):
        """Message field 'elbow_joint_speed'."""
        return self._elbow_joint_speed

    @elbow_joint_speed.setter
    def elbow_joint_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'elbow_joint_speed' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'elbow_joint_speed' field must be an integer in [-32768, 32767]"
        self._elbow_joint_speed = value

    @builtins.property
    def wrist_joint_1_position(self):
        """Message field 'wrist_joint_1_position'."""
        return self._wrist_joint_1_position

    @wrist_joint_1_position.setter
    def wrist_joint_1_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wrist_joint_1_position' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'wrist_joint_1_position' field must be an integer in [-32768, 32767]"
        self._wrist_joint_1_position = value

    @builtins.property
    def wrist_joint_1_speed(self):
        """Message field 'wrist_joint_1_speed'."""
        return self._wrist_joint_1_speed

    @wrist_joint_1_speed.setter
    def wrist_joint_1_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wrist_joint_1_speed' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'wrist_joint_1_speed' field must be an integer in [-32768, 32767]"
        self._wrist_joint_1_speed = value

    @builtins.property
    def wrist_joint_2_position(self):
        """Message field 'wrist_joint_2_position'."""
        return self._wrist_joint_2_position

    @wrist_joint_2_position.setter
    def wrist_joint_2_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wrist_joint_2_position' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'wrist_joint_2_position' field must be an integer in [-32768, 32767]"
        self._wrist_joint_2_position = value

    @builtins.property
    def wrist_joint_2_speed(self):
        """Message field 'wrist_joint_2_speed'."""
        return self._wrist_joint_2_speed

    @wrist_joint_2_speed.setter
    def wrist_joint_2_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wrist_joint_2_speed' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'wrist_joint_2_speed' field must be an integer in [-32768, 32767]"
        self._wrist_joint_2_speed = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SendJointCalibration_Response(type):
    """Metaclass of message 'SendJointCalibration_Response'."""

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
                'node_interface.srv.SendJointCalibration_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_joint_calibration__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_joint_calibration__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_joint_calibration__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_joint_calibration__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_joint_calibration__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendJointCalibration_Response(metaclass=Metaclass_SendJointCalibration_Response):
    """Message class 'SendJointCalibration_Response'."""

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


class Metaclass_SendJointCalibration(type):
    """Metaclass of service 'SendJointCalibration'."""

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
                'node_interface.srv.SendJointCalibration')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__send_joint_calibration

            from node_interface.srv import _send_joint_calibration
            if _send_joint_calibration.Metaclass_SendJointCalibration_Request._TYPE_SUPPORT is None:
                _send_joint_calibration.Metaclass_SendJointCalibration_Request.__import_type_support__()
            if _send_joint_calibration.Metaclass_SendJointCalibration_Response._TYPE_SUPPORT is None:
                _send_joint_calibration.Metaclass_SendJointCalibration_Response.__import_type_support__()


class SendJointCalibration(metaclass=Metaclass_SendJointCalibration):
    from node_interface.srv._send_joint_calibration import SendJointCalibration_Request as Request
    from node_interface.srv._send_joint_calibration import SendJointCalibration_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
