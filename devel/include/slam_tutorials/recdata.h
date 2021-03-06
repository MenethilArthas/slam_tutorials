// Generated by gencpp from file slam_tutorials/recdata.msg
// DO NOT EDIT!


#ifndef SLAM_TUTORIALS_MESSAGE_RECDATA_H
#define SLAM_TUTORIALS_MESSAGE_RECDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace slam_tutorials
{
template <class ContainerAllocator>
struct recdata_
{
  typedef recdata_<ContainerAllocator> Type;

  recdata_()
    : x(0.0)
    , y(0.0)
    , angle(0.0)
    , x_vel(0.0)
    , w_vel(0.0)  {
    }
  recdata_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , angle(0.0)
    , x_vel(0.0)
    , w_vel(0.0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _angle_type;
  _angle_type angle;

   typedef float _x_vel_type;
  _x_vel_type x_vel;

   typedef float _w_vel_type;
  _w_vel_type w_vel;




  typedef boost::shared_ptr< ::slam_tutorials::recdata_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::slam_tutorials::recdata_<ContainerAllocator> const> ConstPtr;

}; // struct recdata_

typedef ::slam_tutorials::recdata_<std::allocator<void> > recdata;

typedef boost::shared_ptr< ::slam_tutorials::recdata > recdataPtr;
typedef boost::shared_ptr< ::slam_tutorials::recdata const> recdataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::slam_tutorials::recdata_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::slam_tutorials::recdata_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace slam_tutorials

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'slam_tutorials': ['/home/action/catkin_ws/src/slam_tutorials/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::slam_tutorials::recdata_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::slam_tutorials::recdata_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slam_tutorials::recdata_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slam_tutorials::recdata_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slam_tutorials::recdata_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slam_tutorials::recdata_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::slam_tutorials::recdata_<ContainerAllocator> >
{
  static const char* value()
  {
    return "67656ea677d26337892047bd47110dc6";
  }

  static const char* value(const ::slam_tutorials::recdata_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x67656ea677d26337ULL;
  static const uint64_t static_value2 = 0x892047bd47110dc6ULL;
};

template<class ContainerAllocator>
struct DataType< ::slam_tutorials::recdata_<ContainerAllocator> >
{
  static const char* value()
  {
    return "slam_tutorials/recdata";
  }

  static const char* value(const ::slam_tutorials::recdata_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::slam_tutorials::recdata_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n\
float32 y\n\
float32 angle\n\
float32 x_vel\n\
float32 w_vel\n\
";
  }

  static const char* value(const ::slam_tutorials::recdata_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::slam_tutorials::recdata_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.angle);
      stream.next(m.x_vel);
      stream.next(m.w_vel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct recdata_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::slam_tutorials::recdata_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::slam_tutorials::recdata_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "angle: ";
    Printer<float>::stream(s, indent + "  ", v.angle);
    s << indent << "x_vel: ";
    Printer<float>::stream(s, indent + "  ", v.x_vel);
    s << indent << "w_vel: ";
    Printer<float>::stream(s, indent + "  ", v.w_vel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SLAM_TUTORIALS_MESSAGE_RECDATA_H
