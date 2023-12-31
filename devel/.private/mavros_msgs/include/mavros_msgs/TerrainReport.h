// Generated by gencpp from file mavros_msgs/TerrainReport.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_TERRAINREPORT_H
#define MAVROS_MSGS_MESSAGE_TERRAINREPORT_H


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
struct TerrainReport_
{
  typedef TerrainReport_<ContainerAllocator> Type;

  TerrainReport_()
    : header()
    , latitude(0.0)
    , longitude(0.0)
    , spacing(0)
    , terrain_height(0.0)
    , current_height(0.0)
    , pending(0)
    , loaded(0)  {
    }
  TerrainReport_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , latitude(0.0)
    , longitude(0.0)
    , spacing(0)
    , terrain_height(0.0)
    , current_height(0.0)
    , pending(0)
    , loaded(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _latitude_type;
  _latitude_type latitude;

   typedef double _longitude_type;
  _longitude_type longitude;

   typedef uint16_t _spacing_type;
  _spacing_type spacing;

   typedef float _terrain_height_type;
  _terrain_height_type terrain_height;

   typedef float _current_height_type;
  _current_height_type current_height;

   typedef uint16_t _pending_type;
  _pending_type pending;

   typedef uint16_t _loaded_type;
  _loaded_type loaded;





  typedef boost::shared_ptr< ::mavros_msgs::TerrainReport_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::TerrainReport_<ContainerAllocator> const> ConstPtr;

}; // struct TerrainReport_

typedef ::mavros_msgs::TerrainReport_<std::allocator<void> > TerrainReport;

typedef boost::shared_ptr< ::mavros_msgs::TerrainReport > TerrainReportPtr;
typedef boost::shared_ptr< ::mavros_msgs::TerrainReport const> TerrainReportConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::TerrainReport_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::TerrainReport_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::TerrainReport_<ContainerAllocator1> & lhs, const ::mavros_msgs::TerrainReport_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.latitude == rhs.latitude &&
    lhs.longitude == rhs.longitude &&
    lhs.spacing == rhs.spacing &&
    lhs.terrain_height == rhs.terrain_height &&
    lhs.current_height == rhs.current_height &&
    lhs.pending == rhs.pending &&
    lhs.loaded == rhs.loaded;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::TerrainReport_<ContainerAllocator1> & lhs, const ::mavros_msgs::TerrainReport_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::TerrainReport_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::TerrainReport_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::TerrainReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::TerrainReport_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::TerrainReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::TerrainReport_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::TerrainReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f658be3a775aa38d678b427733ae0139";
  }

  static const char* value(const ::mavros_msgs::TerrainReport_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf658be3a775aa38dULL;
  static const uint64_t static_value2 = 0x678b427733ae0139ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::TerrainReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/TerrainReport";
  }

  static const char* value(const ::mavros_msgs::TerrainReport_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::TerrainReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message for TERRAIN_REPORT\n"
"# https://mavlink.io/en/messages/common.html#TERRAIN_REPORT\n"
"\n"
"std_msgs/Header header\n"
"\n"
"float64 latitude\n"
"float64 longitude\n"
"uint16 spacing\n"
"float32 terrain_height # in meters, terrain height\n"
"float32 current_height # in meters, vehicle height above terrain\n"
"uint16 pending\n"
"uint16 loaded \n"
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

  static const char* value(const ::mavros_msgs::TerrainReport_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::TerrainReport_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.latitude);
      stream.next(m.longitude);
      stream.next(m.spacing);
      stream.next(m.terrain_height);
      stream.next(m.current_height);
      stream.next(m.pending);
      stream.next(m.loaded);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TerrainReport_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::TerrainReport_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::TerrainReport_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "spacing: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.spacing);
    s << indent << "terrain_height: ";
    Printer<float>::stream(s, indent + "  ", v.terrain_height);
    s << indent << "current_height: ";
    Printer<float>::stream(s, indent + "  ", v.current_height);
    s << indent << "pending: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.pending);
    s << indent << "loaded: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.loaded);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_TERRAINREPORT_H
