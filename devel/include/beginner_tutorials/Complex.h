// Generated by gencpp from file beginner_tutorials/Complex.msg
// DO NOT EDIT!


#ifndef BEGINNER_TUTORIALS_MESSAGE_COMPLEX_H
#define BEGINNER_TUTORIALS_MESSAGE_COMPLEX_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace beginner_tutorials
{
template <class ContainerAllocator>
struct Complex_
{
  typedef Complex_<ContainerAllocator> Type;

  Complex_()
    : real(0.0)
    , imaginary(0.0)  {
    }
  Complex_(const ContainerAllocator& _alloc)
    : real(0.0)
    , imaginary(0.0)  {
  (void)_alloc;
    }



   typedef float _real_type;
  _real_type real;

   typedef float _imaginary_type;
  _imaginary_type imaginary;





  typedef boost::shared_ptr< ::beginner_tutorials::Complex_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::beginner_tutorials::Complex_<ContainerAllocator> const> ConstPtr;

}; // struct Complex_

typedef ::beginner_tutorials::Complex_<std::allocator<void> > Complex;

typedef boost::shared_ptr< ::beginner_tutorials::Complex > ComplexPtr;
typedef boost::shared_ptr< ::beginner_tutorials::Complex const> ComplexConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::beginner_tutorials::Complex_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::beginner_tutorials::Complex_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace beginner_tutorials

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'beginner_tutorials': ['/home/rsf/catkin_ws/src/beginner_tutorials/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::Complex_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::Complex_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::Complex_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::Complex_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::Complex_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::Complex_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::beginner_tutorials::Complex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "54da470dccf15d60bd273ab751e1c0a1";
  }

  static const char* value(const ::beginner_tutorials::Complex_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x54da470dccf15d60ULL;
  static const uint64_t static_value2 = 0xbd273ab751e1c0a1ULL;
};

template<class ContainerAllocator>
struct DataType< ::beginner_tutorials::Complex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "beginner_tutorials/Complex";
  }

  static const char* value(const ::beginner_tutorials::Complex_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::beginner_tutorials::Complex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 real\n\
float32 imaginary\n\
";
  }

  static const char* value(const ::beginner_tutorials::Complex_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::beginner_tutorials::Complex_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.real);
      stream.next(m.imaginary);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Complex_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::beginner_tutorials::Complex_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::beginner_tutorials::Complex_<ContainerAllocator>& v)
  {
    s << indent << "real: ";
    Printer<float>::stream(s, indent + "  ", v.real);
    s << indent << "imaginary: ";
    Printer<float>::stream(s, indent + "  ", v.imaginary);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEGINNER_TUTORIALS_MESSAGE_COMPLEX_H
