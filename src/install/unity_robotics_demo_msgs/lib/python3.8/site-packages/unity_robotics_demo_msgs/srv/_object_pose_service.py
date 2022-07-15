# generated from rosidl_generator_py/resource/_idl.py.em
# with input from unity_robotics_demo_msgs:srv/ObjectPoseService.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectPoseService_Request(type):
    """Metaclass of message 'ObjectPoseService_Request'."""

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
                'unity_robotics_demo_msgs.srv.ObjectPoseService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__object_pose_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__object_pose_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__object_pose_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__object_pose_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__object_pose_service__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObjectPoseService_Request(metaclass=Metaclass_ObjectPoseService_Request):
    """Message class 'ObjectPoseService_Request'."""

    __slots__ = [
        '_object_name',
    ]

    _fields_and_field_types = {
        'object_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.object_name = kwargs.get('object_name', str())

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
        if self.object_name != other.object_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def object_name(self):
        """Message field 'object_name'."""
        return self._object_name

    @object_name.setter
    def object_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'object_name' field must be of type 'str'"
        self._object_name = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ObjectPoseService_Response(type):
    """Metaclass of message 'ObjectPoseService_Response'."""

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
                'unity_robotics_demo_msgs.srv.ObjectPoseService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__object_pose_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__object_pose_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__object_pose_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__object_pose_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__object_pose_service__response

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObjectPoseService_Response(metaclass=Metaclass_ObjectPoseService_Response):
    """Message class 'ObjectPoseService_Response'."""

    __slots__ = [
        '_object_pose',
    ]

    _fields_and_field_types = {
        'object_pose': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.object_pose = kwargs.get('object_pose', Pose())

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
        if self.object_pose != other.object_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def object_pose(self):
        """Message field 'object_pose'."""
        return self._object_pose

    @object_pose.setter
    def object_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'object_pose' field must be a sub message of type 'Pose'"
        self._object_pose = value


class Metaclass_ObjectPoseService(type):
    """Metaclass of service 'ObjectPoseService'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('unity_robotics_demo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'unity_robotics_demo_msgs.srv.ObjectPoseService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__object_pose_service

            from unity_robotics_demo_msgs.srv import _object_pose_service
            if _object_pose_service.Metaclass_ObjectPoseService_Request._TYPE_SUPPORT is None:
                _object_pose_service.Metaclass_ObjectPoseService_Request.__import_type_support__()
            if _object_pose_service.Metaclass_ObjectPoseService_Response._TYPE_SUPPORT is None:
                _object_pose_service.Metaclass_ObjectPoseService_Response.__import_type_support__()


class ObjectPoseService(metaclass=Metaclass_ObjectPoseService):
    from unity_robotics_demo_msgs.srv._object_pose_service import ObjectPoseService_Request as Request
    from unity_robotics_demo_msgs.srv._object_pose_service import ObjectPoseService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
