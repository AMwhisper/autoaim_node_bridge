# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_interface:srv/SendDartRemainingTime.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SendDartRemainingTime_Request(type):
    """Metaclass of message 'SendDartRemainingTime_Request'."""

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
                'node_interface.srv.SendDartRemainingTime_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_dart_remaining_time__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_dart_remaining_time__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_dart_remaining_time__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_dart_remaining_time__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_dart_remaining_time__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendDartRemainingTime_Request(metaclass=Metaclass_SendDartRemainingTime_Request):
    """Message class 'SendDartRemainingTime_Request'."""

    __slots__ = [
        '_dart_remaining_time',
    ]

    _fields_and_field_types = {
        'dart_remaining_time': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dart_remaining_time = kwargs.get('dart_remaining_time', int())

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
        if self.dart_remaining_time != other.dart_remaining_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def dart_remaining_time(self):
        """Message field 'dart_remaining_time'."""
        return self._dart_remaining_time

    @dart_remaining_time.setter
    def dart_remaining_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dart_remaining_time' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dart_remaining_time' field must be an unsigned integer in [0, 255]"
        self._dart_remaining_time = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SendDartRemainingTime_Response(type):
    """Metaclass of message 'SendDartRemainingTime_Response'."""

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
                'node_interface.srv.SendDartRemainingTime_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_dart_remaining_time__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_dart_remaining_time__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_dart_remaining_time__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_dart_remaining_time__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_dart_remaining_time__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendDartRemainingTime_Response(metaclass=Metaclass_SendDartRemainingTime_Response):
    """Message class 'SendDartRemainingTime_Response'."""

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


class Metaclass_SendDartRemainingTime(type):
    """Metaclass of service 'SendDartRemainingTime'."""

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
                'node_interface.srv.SendDartRemainingTime')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__send_dart_remaining_time

            from node_interface.srv import _send_dart_remaining_time
            if _send_dart_remaining_time.Metaclass_SendDartRemainingTime_Request._TYPE_SUPPORT is None:
                _send_dart_remaining_time.Metaclass_SendDartRemainingTime_Request.__import_type_support__()
            if _send_dart_remaining_time.Metaclass_SendDartRemainingTime_Response._TYPE_SUPPORT is None:
                _send_dart_remaining_time.Metaclass_SendDartRemainingTime_Response.__import_type_support__()


class SendDartRemainingTime(metaclass=Metaclass_SendDartRemainingTime):
    from node_interface.srv._send_dart_remaining_time import SendDartRemainingTime_Request as Request
    from node_interface.srv._send_dart_remaining_time import SendDartRemainingTime_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
