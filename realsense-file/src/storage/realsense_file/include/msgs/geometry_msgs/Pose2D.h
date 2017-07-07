// Generated by gencpp from file geometry_msgs/Pose2D.msg
// DO NOT EDIT!


#ifndef GEOMETRY_MSGS_MESSAGE_POSE2D_H
#define GEOMETRY_MSGS_MESSAGE_POSE2D_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace geometry_msgs
{
template <class ContainerAllocator>
struct Pose2D_
{
  typedef Pose2D_<ContainerAllocator> Type;

  Pose2D_()
    : x(0.0)
    , y(0.0)
    , theta(0.0)  {
    }
  Pose2D_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , theta(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _theta_type;
  _theta_type theta;




  typedef std::shared_ptr< ::geometry_msgs::Pose2D_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::geometry_msgs::Pose2D_<ContainerAllocator> const> ConstPtr;

}; // struct Pose2D_

typedef ::geometry_msgs::Pose2D_<std::allocator<void> > Pose2D;

typedef std::shared_ptr< ::geometry_msgs::Pose2D > Pose2DPtr;
typedef std::shared_ptr< ::geometry_msgs::Pose2D const> Pose2DConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::geometry_msgs::Pose2D_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace geometry_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/tmp/binarydeb/ros-kinetic-geometry-msgs-1.12.5/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::geometry_msgs::Pose2D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::geometry_msgs::Pose2D_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::geometry_msgs::Pose2D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::geometry_msgs::Pose2D_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::geometry_msgs::Pose2D_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::geometry_msgs::Pose2D_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::geometry_msgs::Pose2D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "938fa65709584ad8e77d238529be13b8";
  }

  static const char* value(const ::geometry_msgs::Pose2D_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x938fa65709584ad8ULL;
  static const uint64_t static_value2 = 0xe77d238529be13b8ULL;
};

template<class ContainerAllocator>
struct DataType< ::geometry_msgs::Pose2D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose2D";
  }

  static const char* value(const ::geometry_msgs::Pose2D_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::geometry_msgs::Pose2D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
";
  }

  static const char* value(const ::geometry_msgs::Pose2D_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::geometry_msgs::Pose2D_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.theta);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Pose2D_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::geometry_msgs::Pose2D_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "theta: ";
    Printer<double>::stream(s, indent + "  ", v.theta);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GEOMETRY_MSGS_MESSAGE_POSE2D_H