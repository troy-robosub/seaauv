// Generated by gencpp from file mavros_msgs/PlayTuneV2.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_PLAYTUNEV2_H
#define MAVROS_MSGS_MESSAGE_PLAYTUNEV2_H


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
struct PlayTuneV2_
{
  typedef PlayTuneV2_<ContainerAllocator> Type;

  PlayTuneV2_()
    : format(0)
    , tune()  {
    }
  PlayTuneV2_(const ContainerAllocator& _alloc)
    : format(0)
    , tune(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _format_type;
  _format_type format;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _tune_type;
  _tune_type tune;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(QBASIC1_1)
  #undef QBASIC1_1
#endif
#if defined(_WIN32) && defined(MML_MODERN)
  #undef MML_MODERN
#endif

  enum {
    QBASIC1_1 = 1u,
    MML_MODERN = 2u,
  };


  typedef boost::shared_ptr< ::mavros_msgs::PlayTuneV2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::PlayTuneV2_<ContainerAllocator> const> ConstPtr;

}; // struct PlayTuneV2_

typedef ::mavros_msgs::PlayTuneV2_<std::allocator<void> > PlayTuneV2;

typedef boost::shared_ptr< ::mavros_msgs::PlayTuneV2 > PlayTuneV2Ptr;
typedef boost::shared_ptr< ::mavros_msgs::PlayTuneV2 const> PlayTuneV2ConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::PlayTuneV2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::PlayTuneV2_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::PlayTuneV2_<ContainerAllocator1> & lhs, const ::mavros_msgs::PlayTuneV2_<ContainerAllocator2> & rhs)
{
  return lhs.format == rhs.format &&
    lhs.tune == rhs.tune;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::PlayTuneV2_<ContainerAllocator1> & lhs, const ::mavros_msgs::PlayTuneV2_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::PlayTuneV2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::PlayTuneV2_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::PlayTuneV2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::PlayTuneV2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::PlayTuneV2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::PlayTuneV2_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::PlayTuneV2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "177f99ce3572342a75a8b5cdefc8286e";
  }

  static const char* value(const ::mavros_msgs::PlayTuneV2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x177f99ce3572342aULL;
  static const uint64_t static_value2 = 0x75a8b5cdefc8286eULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::PlayTuneV2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/PlayTuneV2";
  }

  static const char* value(const ::mavros_msgs::PlayTuneV2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::PlayTuneV2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Play tune V2\n"
"#\n"
"# https://mavlink.io/en/messages/common.html#PLAY_TUNE_V2\n"
"\n"
"## TUNE_FORMAT enum\n"
"uint8 QBASIC1_1 = 1\n"
"uint8 MML_MODERN = 2\n"
"\n"
"uint8 format\n"
"string tune\n"
;
  }

  static const char* value(const ::mavros_msgs::PlayTuneV2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::PlayTuneV2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.format);
      stream.next(m.tune);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlayTuneV2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::PlayTuneV2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::PlayTuneV2_<ContainerAllocator>& v)
  {
    s << indent << "format: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.format);
    s << indent << "tune: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.tune);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_PLAYTUNEV2_H
