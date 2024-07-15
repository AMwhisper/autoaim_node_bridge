# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_interface:srv/SendAutoaimData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SendAutoaimData_Request(type):
    """Metaclass of message 'SendAutoaimData_Request'."""

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
                'node_interface.srv.SendAutoaimData_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_autoaim_data__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_autoaim_data__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_autoaim_data__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_autoaim_data__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_autoaim_data__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendAutoaimData_Request(metaclass=Metaclass_SendAutoaimData_Request):
    """Message class 'SendAutoaimData_Request'."""

    __slots__ = [
        '_yaw_angle_diff',
        '_pitch_angle_diff',
        '_fire',
    ]

    _fields_and_field_types = {
        'yaw_angle_diff': 'float',
        'pitch_angle_diff': 'float',
        'fire': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.yaw_angle_diff = kwargs.get('yaw_angle_diff', float())
        self.pitch_angle_diff = kwargs.get('pitch_angle_diff', float())
        self.fire = kwargs.get('fire', int())

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
        if self.yaw_angle_diff != other.yaw_angle_diff:
            return False
        if self.pitch_angle_diff != other.pitch_angle_diff:
            return False
        if self.fire != other.fire:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def yaw_angle_diff(self):
        """Message field 'yaw_angle_diff'."""
        return self._yaw_angle_diff

    @yaw_angle_diff.setter
    def yaw_angle_diff(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_angle_diff' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_angle_diff' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_angle_diff = value

    @builtins.property
    def pitch_angle_diff(self):
        """Message field 'pitch_angle_diff'."""
        return self._pitch_angle_diff

    @pitch_angle_diff.setter
    def pitch_angle_diff(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_angle_diff' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_angle_diff' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_angle_diff = value

    @builtins.property
    def fire(self):
        """Message field 'fire'."""
        return self._fire

    @fire.setter
    def fire(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fire' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fire' field must be an unsigned integer in [0, 255]"
        self._fire = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SendAutoaimData_Response(type):
    """Metaclass of message 'SendAutoaimData_Response'."""

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
                'node_interface.srv.SendAutoaimData_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_autoaim_data__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_autoaim_data__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_autoaim_data__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_autoaim_data__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_autoaim_data__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendAutoaimData_Response(metaclass=Metaclass_SendAutoaimData_Response):
    """Message class 'SendAutoaimData_Response'."""

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


class Metaclass_SendAutoaimData(type):
    """Metaclass of service 'SendAutoaimData'."""

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
                'node_interface.srv.SendAutoaimData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__send_autoaim_data

            from node_interface.srv import _send_autoaim_data
            if _send_autoaim_data.Metaclass_SendAutoaimData_Request._TYPE_SUPPORT is None:
                _send_autoaim_data.Metaclass_SendAutoaimData_Request.__import_type_support__()
            if _send_autoaim_data.Metaclass_SendAutoaimData_Response._TYPE_SUPPORT is None:
                _send_autoaim_data.Metaclass_SendAutoaimData_Response.__import_type_support__()


class SendAutoaimData(metaclass=Metaclass_SendAutoaimData):
    from node_interface.srv._send_autoaim_data import SendAutoaimData_Request as Request
    from node_interface.srv._send_autoaim_data import SendAutoaimData_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
