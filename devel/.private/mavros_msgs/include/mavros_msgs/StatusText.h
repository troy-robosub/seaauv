// Generated by gencpp from file mavros_msgs/StatusText.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_STATUSTEXT_H
#define MAVROS_MSGS_MESSAGE_STATUSTEXT_H


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
struct StatusText_
{
  typedef StatusText_<ContainerAllocator> Type;

  StatusText_()
    : header()
    , severity(0)
    , text()  {
    }
  StatusText_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , severity(0)
    , text(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _severity_type;
  _severity_type severity;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _text_type;
  _text_type text;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(EMERGENCY)
  #undef EMERGENCY
#endif
#if defined(_WIN32) && defined(ALERT)
  #undef ALERT
#endif
#if defined(_WIN32) && defined(CRITICAL)
  #undef CRITICAL
#endif
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif
#if defined(_WIN32) && defined(WARNING)
  #undef WARNING
#endif
#if defined(_WIN32) && defined(NOTICE)
  #undef NOTICE
#endif
#if defined(_WIN32) && defined(INFO)
  #undef INFO
#endif
#if defined(_WIN32) && defined(DEBUG)
  #undef DEBUG
#endif

  enum {
    EMERGENCY = 0u,
    ALERT = 1u,
    CRITICAL = 2u,
    ERROR = 3u,
    WARNING = 4u,
    NOTICE = 5u,
    INFO = 6u,
    DEBUG = 7u,
  };


  typedef boost::shared_ptr< ::mavros_msgs::StatusText_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::StatusText_<ContainerAllocator> const> ConstPtr;

}; // struct StatusText_

typedef ::mavros_msgs::StatusText_<std::allocator<void> > StatusText;

typedef boost::shared_ptr< ::mavros_msgs::StatusText > StatusTextPtr;
typedef boost::shared_ptr< ::mavros_msgs::StatusText const> StatusTextConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::StatusText_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::StatusText_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::StatusText_<ContainerAllocator1> & lhs, const ::mavros_msgs::StatusText_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.severity == rhs.severity &&
    lhs.text == rhs.text;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::StatusText_<ContainerAllocator1> & lhs, const ::mavros_msgs::StatusText_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::StatusText_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::StatusText_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::StatusText_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::StatusText_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::StatusText_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::StatusText_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::StatusText_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6cfd33cd09e4abf5841d7be3c770a969";
  }

  static const char* value(const ::mavros_msgs::StatusText_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6cfd33cd09e4abf5ULL;
  static const uint64_t static_value2 = 0x841d7be3c770a969ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::StatusText_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/StatusText";
  }

  static const char* value(const ::mavros_msgs::StatusText_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::StatusText_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# STATUSTEXT message representation\n"
"# https://mavlink.io/en/messages/common.html#STATUSTEXT\n"
"\n"
"# Severity levels\n"
"uint8 EMERGENCY = 0\n"
"uint8 ALERT = 1\n"
"uint8 CRITICAL = 2\n"
"uint8 ERROR = 3\n"
"uint8 WARNING = 4\n"
"uint8 NOTICE = 5\n"
"uint8 INFO = 6\n"
"uint8 DEBUG = 7\n"
"\n"
"# Fields\n"
"std_msgs/Header header\n"
"uint8 severity\n"
"string text\n"
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

  static const char* value(const ::mavros_msgs::StatusText_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::StatusText_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.severity);
      stream.next(m.text);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StatusText_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::StatusText_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::StatusText_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "severity: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.severity);
    s << indent << "text: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.text);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_STATUSTEXT_H
