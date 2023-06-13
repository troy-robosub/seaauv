// Generated by gencpp from file mavros_msgs/CommandTriggerIntervalResponse.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_COMMANDTRIGGERINTERVALRESPONSE_H
#define MAVROS_MSGS_MESSAGE_COMMANDTRIGGERINTERVALRESPONSE_H


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
struct CommandTriggerIntervalResponse_
{
  typedef CommandTriggerIntervalResponse_<ContainerAllocator> Type;

  CommandTriggerIntervalResponse_()
    : success(false)
    , result(0)  {
    }
  CommandTriggerIntervalResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , result(0)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef uint8_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CommandTriggerIntervalResponse_

typedef ::mavros_msgs::CommandTriggerIntervalResponse_<std::allocator<void> > CommandTriggerIntervalResponse;

typedef boost::shared_ptr< ::mavros_msgs::CommandTriggerIntervalResponse > CommandTriggerIntervalResponsePtr;
typedef boost::shared_ptr< ::mavros_msgs::CommandTriggerIntervalResponse const> CommandTriggerIntervalResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator1> & lhs, const ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator1> & lhs, const ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1cd894375e4e3d2861d2222772894fdb";
  }

  static const char* value(const ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1cd894375e4e3d28ULL;
  static const uint64_t static_value2 = 0x61d2222772894fdbULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/CommandTriggerIntervalResponse";
  }

  static const char* value(const ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"uint8 result\n"
;
  }

  static const char* value(const ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommandTriggerIntervalResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::CommandTriggerIntervalResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_COMMANDTRIGGERINTERVALRESPONSE_H
