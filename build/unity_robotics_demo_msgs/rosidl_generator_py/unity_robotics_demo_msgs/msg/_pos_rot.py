# generated from rosidl_generator_py/resource/_idl.py.em
# with input from unity_robotics_demo_msgs:msg/PosRot.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PosRot(type):
    """Metaclass of message 'PosRot'."""

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
            module = import_type_support('unity_robotics_demo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'unity_robotics_demo_msgs.msg.PosRot')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pos_rot
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pos_rot
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pos_rot
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pos_rot
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pos_rot

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PosRot(metaclass=Metaclass_PosRot):
    """Message class 'PosRot'."""

    __slots__ = [
        '_pos_x',
        '_pos_y',
        '_pos_z',
        '_rot_x',
        '_rot_y',
        '_rot_z',
        '_rot_w',
    ]

    _fields_and_field_types = {
        'pos_x': 'float',
        'pos_y': 'float',
        'pos_z': 'float',
        'rot_x': 'float',
        'rot_y': 'float',
        'rot_z': 'float',
        'rot_w': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pos_x = kwargs.get('pos_x', float())
        self.pos_y = kwargs.get('pos_y', float())
        self.pos_z = kwargs.get('pos_z', float())
        self.rot_x = kwargs.get('rot_x', float())
        self.rot_y = kwargs.get('rot_y', float())
        self.rot_z = kwargs.get('rot_z', float())
        self.rot_w = kwargs.get('rot_w', float())

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
        if self.pos_x != other.pos_x:
            return False
        if self.pos_y != other.pos_y:
            return False
        if self.pos_z != other.pos_z:
            return False
        if self.rot_x != other.rot_x:
            return False
        if self.rot_y != other.rot_y:
            return False
        if self.rot_z != other.rot_z:
            return False
        if self.rot_w != other.rot_w:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def pos_x(self):
        """Message field 'pos_x'."""
        return self._pos_x

    @pos_x.setter
    def pos_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_x' field must be of type 'float'"
        self._pos_x = value

    @property
    def pos_y(self):
        """Message field 'pos_y'."""
        return self._pos_y

    @pos_y.setter
    def pos_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_y' field must be of type 'float'"
        self._pos_y = value

    @property
    def pos_z(self):
        """Message field 'pos_z'."""
        return self._pos_z

    @pos_z.setter
    def pos_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_z' field must be of type 'float'"
        self._pos_z = value

    @property
    def rot_x(self):
        """Message field 'rot_x'."""
        return self._rot_x

    @rot_x.setter
    def rot_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rot_x' field must be of type 'float'"
        self._rot_x = value

    @property
    def rot_y(self):
        """Message field 'rot_y'."""
        return self._rot_y

    @rot_y.setter
    def rot_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rot_y' field must be of type 'float'"
        self._rot_y = value

    @property
    def rot_z(self):
        """Message field 'rot_z'."""
        return self._rot_z

    @rot_z.setter
    def rot_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rot_z' field must be of type 'float'"
        self._rot_z = value

    @property
    def rot_w(self):
        """Message field 'rot_w'."""
        return self._rot_w

    @rot_w.setter
    def rot_w(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rot_w' field must be of type 'float'"
        self._rot_w = value
