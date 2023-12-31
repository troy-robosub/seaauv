// Generated by gencpp from file mavros_msgs/FileMakeDirRequest.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_FILEMAKEDIRREQUEST_H
#define MAVROS_MSGS_MESSAGE_FILEMAKEDIRREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros_msgs
{
template <class ContainerAllocator>
struct FileMakeDirRequest_
{
  typedef FileMakeDirRequest_<ContainerAllocator> Type;

  FileMakeDirRequest_()
    : dir_path()  {
    }
  FileMakeDirRequest_(const ContainerAllocator& _alloc)
    : dir_path(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _dir_path_type;
  _dir_path_type dir_path;





  typedef boost::shared_ptr< ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator> const> ConstPtr;

}; // struct FileMakeDirRequest_

typedef ::mavros_msgs::FileMakeDirRequest_<std::allocator<void> > FileMakeDirRequest;

typedef boost::shared_ptr< ::mavros_msgs::FileMakeDirRequest > FileMakeDirRequestPtr;
typedef boost::shared_ptr< ::mavros_msgs::FileMakeDirRequest const> FileMakeDirRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator1> & lhs, const ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator2> & rhs)
{
  return lhs.dir_path == rhs.dir_path;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator1> & lhs, const ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "401d5cf5f836aaa9ebdc0897f75da874";
  }

  static const char* value(const ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x401d5cf5f836aaa9ULL;
  static const uint64_t static_value2 = 0xebdc0897f75da874ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/FileMakeDirRequest";
  }

  static const char* value(const ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# FTP::MakeDir\n"
"#\n"
"# :success:	indicates success end of request\n"
"# :r_errno:	remote errno if applicapable\n"
"\n"
"string dir_path\n"
;
  }

  static const char* value(const ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dir_path);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FileMakeDirRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::FileMakeDirRequest_<ContainerAllocator>& v)
  {
    s << indent << "dir_path: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.dir_path);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_FILEMAKEDIRREQUEST_H
