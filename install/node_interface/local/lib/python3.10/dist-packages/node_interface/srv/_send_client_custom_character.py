# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_interface:srv/SendClientCustomCharacter.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'data'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SendClientCustomCharacter_Request(type):
    """Metaclass of message 'SendClientCustomCharacter_Request'."""

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
                'node_interface.srv.SendClientCustomCharacter_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_client_custom_character__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_client_custom_character__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_client_custom_character__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_client_custom_character__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_client_custom_character__request

            from node_interface.msg import GraphicDataType
            if GraphicDataType.__class__._TYPE_SUPPORT is None:
                GraphicDataType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendClientCustomCharacter_Request(metaclass=Metaclass_SendClientCustomCharacter_Request):
    """Message class 'SendClientCustomCharacter_Request'."""

    __slots__ = [
        '_data_cmd_id',
        '_send_id',
        '_receiver_id',
        '_grapic_data_struct',
        '_data',
    ]

    _fields_and_field_types = {
        'data_cmd_id': 'uint16',
        'send_id': 'uint16',
        'receiver_id': 'uint16',
        'grapic_data_struct': 'node_interface/GraphicDataType',
        'data': 'uint8[30]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['node_interface', 'msg'], 'GraphicDataType'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 30),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.data_cmd_id = kwargs.get('data_cmd_id', int())
        self.send_id = kwargs.get('send_id', int())
        self.receiver_id = kwargs.get('receiver_id', int())
        from node_interface.msg import GraphicDataType
        self.grapic_data_struct = kwargs.get('grapic_data_struct', GraphicDataType())
        if 'data' not in kwargs:
            self.data = numpy.zeros(30, dtype=numpy.uint8)
        else:
            self.data = numpy.array(kwargs.get('data'), dtype=numpy.uint8)
            assert self.data.shape == (30, )

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
        if self.data_cmd_id != other.data_cmd_id:
            return False
        if self.send_id != other.send_id:
            return False
        if self.receiver_id != other.receiver_id:
            return False
        if self.grapic_data_struct != other.grapic_data_struct:
            return False
        if all(self.data != other.data):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def data_cmd_id(self):
        """Message field 'data_cmd_id'."""
        return self._data_cmd_id

    @data_cmd_id.setter
    def data_cmd_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data_cmd_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'data_cmd_id' field must be an unsigned integer in [0, 65535]"
        self._data_cmd_id = value

    @builtins.property
    def send_id(self):
        """Message field 'send_id'."""
        return self._send_id

    @send_id.setter
    def send_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'send_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'send_id' field must be an unsigned integer in [0, 65535]"
        self._send_id = value

    @builtins.property
    def receiver_id(self):
        """Message field 'receiver_id'."""
        return self._receiver_id

    @receiver_id.setter
    def receiver_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'receiver_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'receiver_id' field must be an unsigned integer in [0, 65535]"
        self._receiver_id = value

    @builtins.property
    def grapic_data_struct(self):
        """Message field 'grapic_data_struct'."""
        return self._grapic_data_struct

    @grapic_data_struct.setter
    def grapic_data_struct(self, value):
        if __debug__:
            from node_interface.msg import GraphicDataType
            assert \
                isinstance(value, GraphicDataType), \
                "The 'grapic_data_struct' field must be a sub message of type 'GraphicDataType'"
        self._grapic_data_struct = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'data' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 30, \
                "The 'data' numpy.ndarray() must have a size of 30"
            self._data = value
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
                 len(value) == 30 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence with length 30 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = numpy.array(value, dtype=numpy.uint8)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SendClientCustomCharacter_Response(type):
    """Metaclass of message 'SendClientCustomCharacter_Response'."""

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
                'node_interface.srv.SendClientCustomCharacter_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_client_custom_character__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_client_custom_character__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_client_custom_character__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_client_custom_character__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_client_custom_character__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendClientCustomCharacter_Response(metaclass=Metaclass_SendClientCustomCharacter_Response):
    """Message class 'SendClientCustomCharacter_Response'."""

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


class Metaclass_SendClientCustomCharacter(type):
    """Metaclass of service 'SendClientCustomCharacter'."""

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
                'node_interface.srv.SendClientCustomCharacter')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__send_client_custom_character

            from node_interface.srv import _send_client_custom_character
            if _send_client_custom_character.Metaclass_SendClientCustomCharacter_Request._TYPE_SUPPORT is None:
                _send_client_custom_character.Metaclass_SendClientCustomCharacter_Request.__import_type_support__()
            if _send_client_custom_character.Metaclass_SendClientCustomCharacter_Response._TYPE_SUPPORT is None:
                _send_client_custom_character.Metaclass_SendClientCustomCharacter_Response.__import_type_support__()


class SendClientCustomCharacter(metaclass=Metaclass_SendClientCustomCharacter):
    from node_interface.srv._send_client_custom_character import SendClientCustomCharacter_Request as Request
    from node_interface.srv._send_client_custom_character import SendClientCustomCharacter_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')