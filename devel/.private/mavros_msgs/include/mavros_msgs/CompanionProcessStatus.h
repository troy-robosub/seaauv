// Generated by gencpp from file mavros_msgs/CompanionProcessStatus.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_COMPANIONPROCESSSTATUS_H
#define MAVROS_MSGS_MESSAGE_COMPANIONPROCESSSTATUS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct CompanionProcessStatus_
{
  typedef CompanionProcessStatus_<ContainerAllocator> Type;

  CompanionProcessStatus_()
    : header()
    , state(0)
    , component(0)  {
    }
  CompanionProcessStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , state(0)
    , component(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _state_type;
  _state_type state;

   typedef uint8_t _component_type;
  _component_type component;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(MAV_STATE_UNINIT)
  #undef MAV_STATE_UNINIT
#endif
#if defined(_WIN32) && defined(MAV_STATE_BOOT)
  #undef MAV_STATE_BOOT
#endif
#if defined(_WIN32) && defined(MAV_STATE_CALIBRATING)
  #undef MAV_STATE_CALIBRATING
#endif
#if defined(_WIN32) && defined(MAV_STATE_STANDBY)
  #undef MAV_STATE_STANDBY
#endif
#if defined(_WIN32) && defined(MAV_STATE_ACTIVE)
  #undef MAV_STATE_ACTIVE
#endif
#if defined(_WIN32) && defined(MAV_STATE_CRITICAL)
  #undef MAV_STATE_CRITICAL
#endif
#if defined(_WIN32) && defined(MAV_STATE_EMERGENCY)
  #undef MAV_STATE_EMERGENCY
#endif
#if defined(_WIN32) && defined(MAV_STATE_POWEROFF)
  #undef MAV_STATE_POWEROFF
#endif
#if defined(_WIN32) && defined(MAV_STATE_FLIGHT_TERMINATION)
  #undef MAV_STATE_FLIGHT_TERMINATION
#endif
#if defined(_WIN32) && defined(MAV_COMP_ID_OBSTACLE_AVOIDANCE)
  #undef MAV_COMP_ID_OBSTACLE_AVOIDANCE
#endif
#if defined(_WIN32) && defined(MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY)
  #undef MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY
#endif

  enum {
    MAV_STATE_UNINIT = 0u,
    MAV_STATE_BOOT = 1u,
    MAV_STATE_CALIBRATING = 2u,
    MAV_STATE_STANDBY = 3u,
    MAV_STATE_ACTIVE = 4u,
    MAV_STATE_CRITICAL = 5u,
    MAV_STATE_EMERGENCY = 6u,
    MAV_STATE_POWEROFF = 7u,
    MAV_STATE_FLIGHT_TERMINATION = 8u,
    MAV_COMP_ID_OBSTACLE_AVOIDANCE = 196u,
    MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY = 197u,
  };


  typedef boost::shared_ptr< ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator> const> ConstPtr;

}; // struct CompanionProcessStatus_

typedef ::mavros_msgs::CompanionProcessStatus_<std::allocator<void> > CompanionProcessStatus;

typedef boost::shared_ptr< ::mavros_msgs::CompanionProcessStatus > CompanionProcessStatusPtr;
typedef boost::shared_ptr< ::mavros_msgs::CompanionProcessStatus const> CompanionProcessStatusConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator1> & lhs, const ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.state == rhs.state &&
    lhs.component == rhs.component;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator1> & lhs, const ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b6dd787fcd873e87778987b1845f4cb5";
  }

  static const char* value(const ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb6dd787fcd873e87ULL;
  static const uint64_t static_value2 = 0x778987b1845f4cb5ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/CompanionProcessStatus";
  }

  static const char* value(const ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Mavros message: COMPANIONPROCESSSTATUS\n"
"\n"
"std_msgs/Header header\n"
"\n"
"uint8 state			# See enum COMPANION_PROCESS_STATE\n"
"uint8 component		# See enum MAV_COMPONENT\n"
"\n"
"uint8 MAV_STATE_UNINIT = 0\n"
"uint8 MAV_STATE_BOOT = 1\n"
"uint8 MAV_STATE_CALIBRATING = 2\n"
"uint8 MAV_STATE_STANDBY = 3\n"
"uint8 MAV_STATE_ACTIVE = 4\n"
"uint8 MAV_STATE_CRITICAL = 5\n"
"uint8 MAV_STATE_EMERGENCY = 6\n"
"uint8 MAV_STATE_POWEROFF = 7\n"
"uint8 MAV_STATE_FLIGHT_TERMINATION = 8\n"
"\n"
"uint8 MAV_COMP_ID_OBSTACLE_AVOIDANCE = 196\n"
"uint8 MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY = 197\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.state);
      stream.next(m.component);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CompanionProcessStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::CompanionProcessStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
    s << indent << "component: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.component);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_COMPANIONPROCESSSTATUS_H
