# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_interface:srv/SendBulletRemaining.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SendBulletRemaining_Request(type):
    """Metaclass of message 'SendBulletRemaining_Request'."""

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
                'node_interface.srv.SendBulletRemaining_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_bullet_remaining__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_bullet_remaining__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_bullet_remaining__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_bullet_remaining__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_bullet_remaining__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendBulletRemaining_Request(metaclass=Metaclass_SendBulletRemaining_Request):
    """Message class 'SendBulletRemaining_Request'."""

    __slots__ = [
        '_bullet_remaining_num_17mm',
        '_bullet_remaining_num_42mm',
        '_coin_remaining_num',
    ]

    _fields_and_field_types = {
        'bullet_remaining_num_17mm': 'uint16',
        'bullet_remaining_num_42mm': 'uint16',
        'coin_remaining_num': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bullet_remaining_num_17mm = kwargs.get('bullet_remaining_num_17mm', int())
        self.bullet_remaining_num_42mm = kwargs.get('bullet_remaining_num_42mm', int())
        self.coin_remaining_num = kwargs.get('coin_remaining_num', int())

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
        if self.bullet_remaining_num_17mm != other.bullet_remaining_num_17mm:
            return False
        if self.bullet_remaining_num_42mm != other.bullet_remaining_num_42mm:
            return False
        if self.coin_remaining_num != other.coin_remaining_num:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bullet_remaining_num_17mm(self):
        """Message field 'bullet_remaining_num_17mm'."""
        return self._bullet_remaining_num_17mm

    @bullet_remaining_num_17mm.setter
    def bullet_remaining_num_17mm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bullet_remaining_num_17mm' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bullet_remaining_num_17mm' field must be an unsigned integer in [0, 65535]"
        self._bullet_remaining_num_17mm = value

    @builtins.property
    def bullet_remaining_num_42mm(self):
        """Message field 'bullet_remaining_num_42mm'."""
        return self._bullet_remaining_num_42mm

    @bullet_remaining_num_42mm.setter
    def bullet_remaining_num_42mm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bullet_remaining_num_42mm' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bullet_remaining_num_42mm' field must be an unsigned integer in [0, 65535]"
        self._bullet_remaining_num_42mm = value

    @builtins.property
    def coin_remaining_num(self):
        """Message field 'coin_remaining_num'."""
        return self._coin_remaining_num

    @coin_remaining_num.setter
    def coin_remaining_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'coin_remaining_num' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'coin_remaining_num' field must be an unsigned integer in [0, 65535]"
        self._coin_remaining_num = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SendBulletRemaining_Response(type):
    """Metaclass of message 'SendBulletRemaining_Response'."""

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
                'node_interface.srv.SendBulletRemaining_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_bullet_remaining__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_bullet_remaining__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_bullet_remaining__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_bullet_remaining__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_bullet_remaining__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendBulletRemaining_Response(metaclass=Metaclass_SendBulletRemaining_Response):
    """Message class 'SendBulletRemaining_Response'."""

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


class Metaclass_SendBulletRemaining(type):
    """Metaclass of service 'SendBulletRemaining'."""

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
                'node_interface.srv.SendBulletRemaining')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__send_bullet_remaining

            from node_interface.srv import _send_bullet_remaining
            if _send_bullet_remaining.Metaclass_SendBulletRemaining_Request._TYPE_SUPPORT is None:
                _send_bullet_remaining.Metaclass_SendBulletRemaining_Request.__import_type_support__()
            if _send_bullet_remaining.Metaclass_SendBulletRemaining_Response._TYPE_SUPPORT is None:
                _send_bullet_remaining.Metaclass_SendBulletRemaining_Response.__import_type_support__()


class SendBulletRemaining(metaclass=Metaclass_SendBulletRemaining):
    from node_interface.srv._send_bullet_remaining import SendBulletRemaining_Request as Request
    from node_interface.srv._send_bullet_remaining import SendBulletRemaining_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
