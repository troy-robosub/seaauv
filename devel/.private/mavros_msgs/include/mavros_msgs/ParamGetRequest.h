// Generated by gencpp from file mavros_msgs/ParamGetRequest.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_PARAMGETREQUEST_H
#define MAVROS_MSGS_MESSAGE_PARAMGETREQUEST_H


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
struct ParamGetRequest_
{
  typedef ParamGetRequest_<ContainerAllocator> Type;

  ParamGetRequest_()
    : param_id()  {
    }
  ParamGetRequest_(const ContainerAllocator& _alloc)
    : param_id(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _param_id_type;
  _param_id_type param_id;





  typedef boost::shared_ptr< ::mavros_msgs::ParamGetRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::ParamGetRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ParamGetRequest_

typedef ::mavros_msgs::ParamGetRequest_<std::allocator<void> > ParamGetRequest;

typedef boost::shared_ptr< ::mavros_msgs::ParamGetRequest > ParamGetRequestPtr;
typedef boost::shared_ptr< ::mavros_msgs::ParamGetRequest const> ParamGetRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::ParamGetRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::ParamGetRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::ParamGetRequest_<ContainerAllocator1> & lhs, const ::mavros_msgs::ParamGetRequest_<ContainerAllocator2> & rhs)
{
  return lhs.param_id == rhs.param_id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::ParamGetRequest_<ContainerAllocator1> & lhs, const ::mavros_msgs::ParamGetRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::ParamGetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::ParamGetRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::ParamGetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::ParamGetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::ParamGetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::ParamGetRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::ParamGetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a0c8304d59f465712790120c3fc4b7d0";
  }

  static const char* value(const ::mavros_msgs::ParamGetRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa0c8304d59f46571ULL;
  static const uint64_t static_value2 = 0x2790120c3fc4b7d0ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::ParamGetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/ParamGetRequest";
  }

  static const char* value(const ::mavros_msgs::ParamGetRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::ParamGetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Request parameter from attached device\n"
"\n"
"string param_id\n"
;
  }

  static const char* value(const ::mavros_msgs::ParamGetRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::ParamGetRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.param_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ParamGetRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::ParamGetRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::ParamGetRequest_<ContainerAllocator>& v)
  {
    s << indent << "param_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.param_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_PARAMGETREQUEST_H
