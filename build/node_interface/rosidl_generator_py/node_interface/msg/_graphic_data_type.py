# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_interface:msg/GraphicDataType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'graphic_name'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GraphicDataType(type):
    """Metaclass of message 'GraphicDataType'."""

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
                'node_interface.msg.GraphicDataType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__graphic_data_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__graphic_data_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__graphic_data_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__graphic_data_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__graphic_data_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GraphicDataType(metaclass=Metaclass_GraphicDataType):
    """Message class 'GraphicDataType'."""

    __slots__ = [
        '_graphic_name',
        '_operate_tpye',
        '_graphic_tpye',
        '_layer',
        '_color',
        '_start_angle',
        '_end_angle',
        '_width',
        '_start_x',
        '_start_y',
        '_radius',
        '_end_x',
        '_end_y',
    ]

    _fields_and_field_types = {
        'graphic_name': 'uint8[3]',
        'operate_tpye': 'uint32',
        'graphic_tpye': 'uint32',
        'layer': 'uint32',
        'color': 'uint32',
        'start_angle': 'uint32',
        'end_angle': 'uint32',
        'width': 'uint32',
        'start_x': 'uint32',
        'start_y': 'uint32',
        'radius': 'uint32',
        'end_x': 'uint32',
        'end_y': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'graphic_name' not in kwargs:
            self.graphic_name = numpy.zeros(3, dtype=numpy.uint8)
        else:
            self.graphic_name = numpy.array(kwargs.get('graphic_name'), dtype=numpy.uint8)
            assert self.graphic_name.shape == (3, )
        self.operate_tpye = kwargs.get('operate_tpye', int())
        self.graphic_tpye = kwargs.get('graphic_tpye', int())
        self.layer = kwargs.get('layer', int())
        self.color = kwargs.get('color', int())
        self.start_angle = kwargs.get('start_angle', int())
        self.end_angle = kwargs.get('end_angle', int())
        self.width = kwargs.get('width', int())
        self.start_x = kwargs.get('start_x', int())
        self.start_y = kwargs.get('start_y', int())
        self.radius = kwargs.get('radius', int())
        self.end_x = kwargs.get('end_x', int())
        self.end_y = kwargs.get('end_y', int())

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
        if all(self.graphic_name != other.graphic_name):
            return False
        if self.operate_tpye != other.operate_tpye:
            return False
        if self.graphic_tpye != other.graphic_tpye:
            return False
        if self.layer != other.layer:
            return False
        if self.color != other.color:
            return False
        if self.start_angle != other.start_angle:
            return False
        if self.end_angle != other.end_angle:
            return False
        if self.width != other.width:
            return False
        if self.start_x != other.start_x:
            return False
        if self.start_y != other.start_y:
            return False
        if self.radius != other.radius:
            return False
        if self.end_x != other.end_x:
            return False
        if self.end_y != other.end_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def graphic_name(self):
        """Message field 'graphic_name'."""
        return self._graphic_name

    @graphic_name.setter
    def graphic_name(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'graphic_name' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 3, \
                "The 'graphic_name' numpy.ndarray() must have a size of 3"
            self._graphic_name = value
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
                 len(value) == 3 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'graphic_name' field must be a set or sequence with length 3 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._graphic_name = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def operate_tpye(self):
        """Message field 'operate_tpye'."""
        return self._operate_tpye

    @operate_tpye.setter
    def operate_tpye(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operate_tpye' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'operate_tpye' field must be an unsigned integer in [0, 4294967295]"
        self._operate_tpye = value

    @builtins.property
    def graphic_tpye(self):
        """Message field 'graphic_tpye'."""
        return self._graphic_tpye

    @graphic_tpye.setter
    def graphic_tpye(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'graphic_tpye' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'graphic_tpye' field must be an unsigned integer in [0, 4294967295]"
        self._graphic_tpye = value

    @builtins.property
    def layer(self):
        """Message field 'layer'."""
        return self._layer

    @layer.setter
    def layer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'layer' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'layer' field must be an unsigned integer in [0, 4294967295]"
        self._layer = value

    @builtins.property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'color' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'color' field must be an unsigned integer in [0, 4294967295]"
        self._color = value

    @builtins.property
    def start_angle(self):
        """Message field 'start_angle'."""
        return self._start_angle

    @start_angle.setter
    def start_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_angle' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'start_angle' field must be an unsigned integer in [0, 4294967295]"
        self._start_angle = value

    @builtins.property
    def end_angle(self):
        """Message field 'end_angle'."""
        return self._end_angle

    @end_angle.setter
    def end_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'end_angle' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'end_angle' field must be an unsigned integer in [0, 4294967295]"
        self._end_angle = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'width' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'width' field must be an unsigned integer in [0, 4294967295]"
        self._width = value

    @builtins.property
    def start_x(self):
        """Message field 'start_x'."""
        return self._start_x

    @start_x.setter
    def start_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_x' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'start_x' field must be an unsigned integer in [0, 4294967295]"
        self._start_x = value

    @builtins.property
    def start_y(self):
        """Message field 'start_y'."""
        return self._start_y

    @start_y.setter
    def start_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_y' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'start_y' field must be an unsigned integer in [0, 4294967295]"
        self._start_y = value

    @builtins.property
    def radius(self):
        """Message field 'radius'."""
        return self._radius

    @radius.setter
    def radius(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'radius' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'radius' field must be an unsigned integer in [0, 4294967295]"
        self._radius = value

    @builtins.property
    def end_x(self):
        """Message field 'end_x'."""
        return self._end_x

    @end_x.setter
    def end_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'end_x' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'end_x' field must be an unsigned integer in [0, 4294967295]"
        self._end_x = value

    @builtins.property
    def end_y(self):
        """Message field 'end_y'."""
        return self._end_y

    @end_y.setter
    def end_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'end_y' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'end_y' field must be an unsigned integer in [0, 4294967295]"
        self._end_y = value
