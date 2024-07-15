# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_interface:srv/SendRefereeWarning.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SendRefereeWarning_Request(type):
    """Metaclass of message 'SendRefereeWarning_Request'."""

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
                'node_interface.srv.SendRefereeWarning_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_referee_warning__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_referee_warning__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_referee_warning__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_referee_warning__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_referee_warning__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendRefereeWarning_Request(metaclass=Metaclass_SendRefereeWarning_Request):
    """Message class 'SendRefereeWarning_Request'."""

    __slots__ = [
        '_level',
        '_foul_robot_id',
    ]

    _fields_and_field_types = {
        'level': 'uint8',
        'foul_robot_id': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.level = kwargs.get('level', int())
        self.foul_robot_id = kwargs.get('foul_robot_id', int())

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
        if self.level != other.level:
            return False
        if self.foul_robot_id != other.foul_robot_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def level(self):
        """Message field 'level'."""
        return self._level

    @level.setter
    def level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'level' field must be an unsigned integer in [0, 255]"
        self._level = value

    @builtins.property
    def foul_robot_id(self):
        """Message field 'foul_robot_id'."""
        return self._foul_robot_id

    @foul_robot_id.setter
    def foul_robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'foul_robot_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'foul_robot_id' field must be an unsigned integer in [0, 255]"
        self._foul_robot_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SendRefereeWarning_Response(type):
    """Metaclass of message 'SendRefereeWarning_Response'."""

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
                'node_interface.srv.SendRefereeWarning_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_referee_warning__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_referee_warning__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_referee_warning__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_referee_warning__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_referee_warning__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendRefereeWarning_Response(metaclass=Metaclass_SendRefereeWarning_Response):
    """Message class 'SendRefereeWarning_Response'."""

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


class Metaclass_SendRefereeWarning(type):
    """Metaclass of service 'SendRefereeWarning'."""

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
                'node_interface.srv.SendRefereeWarning')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__send_referee_warning

            from node_interface.srv import _send_referee_warning
            if _send_referee_warning.Metaclass_SendRefereeWarning_Request._TYPE_SUPPORT is None:
                _send_referee_warning.Metaclass_SendRefereeWarning_Request.__import_type_support__()
            if _send_referee_warning.Metaclass_SendRefereeWarning_Response._TYPE_SUPPORT is None:
                _send_referee_warning.Metaclass_SendRefereeWarning_Response.__import_type_support__()


class SendRefereeWarning(metaclass=Metaclass_SendRefereeWarning):
    from node_interface.srv._send_referee_warning import SendRefereeWarning_Request as Request
    from node_interface.srv._send_referee_warning import SendRefereeWarning_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
