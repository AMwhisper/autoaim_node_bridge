# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_interface:srv/SendDbugData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'dbus_buffer'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SendDbugData_Request(type):
    """Metaclass of message 'SendDbugData_Request'."""

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
                'node_interface.srv.SendDbugData_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_dbug_data__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_dbug_data__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_dbug_data__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_dbug_data__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_dbug_data__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendDbugData_Request(metaclass=Metaclass_SendDbugData_Request):
    """Message class 'SendDbugData_Request'."""

    __slots__ = [
        '_dbus_buffer',
    ]

    _fields_and_field_types = {
        'dbus_buffer': 'uint8[18]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 18),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'dbus_buffer' not in kwargs:
            self.dbus_buffer = numpy.zeros(18, dtype=numpy.uint8)
        else:
            self.dbus_buffer = numpy.array(kwargs.get('dbus_buffer'), dtype=numpy.uint8)
            assert self.dbus_buffer.shape == (18, )

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
        if all(self.dbus_buffer != other.dbus_buffer):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def dbus_buffer(self):
        """Message field 'dbus_buffer'."""
        return self._dbus_buffer

    @dbus_buffer.setter
    def dbus_buffer(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'dbus_buffer' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 18, \
                "The 'dbus_buffer' numpy.ndarray() must have a size of 18"
            self._dbus_buffer = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 18 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'dbus_buffer' field must be a set or sequence with length 18 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._dbus_buffer = numpy.array(value, dtype=numpy.uint8)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SendDbugData_Response(type):
    """Metaclass of message 'SendDbugData_Response'."""

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
                'node_interface.srv.SendDbugData_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_dbug_data__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_dbug_data__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_dbug_data__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_dbug_data__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_dbug_data__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendDbugData_Response(metaclass=Metaclass_SendDbugData_Response):
    """Message class 'SendDbugData_Response'."""

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


class Metaclass_SendDbugData(type):
    """Metaclass of service 'SendDbugData'."""

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
                'node_interface.srv.SendDbugData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__send_dbug_data

            from node_interface.srv import _send_dbug_data
            if _send_dbug_data.Metaclass_SendDbugData_Request._TYPE_SUPPORT is None:
                _send_dbug_data.Metaclass_SendDbugData_Request.__import_type_support__()
            if _send_dbug_data.Metaclass_SendDbugData_Response._TYPE_SUPPORT is None:
                _send_dbug_data.Metaclass_SendDbugData_Response.__import_type_support__()


class SendDbugData(metaclass=Metaclass_SendDbugData):
    from node_interface.srv._send_dbug_data import SendDbugData_Request as Request
    from node_interface.srv._send_dbug_data import SendDbugData_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
