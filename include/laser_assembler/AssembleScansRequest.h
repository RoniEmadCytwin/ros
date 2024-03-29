// Generated by gencpp from file laser_assembler/AssembleScansRequest.msg
// DO NOT EDIT!


#ifndef LASER_ASSEMBLER_MESSAGE_ASSEMBLESCANSREQUEST_H
#define LASER_ASSEMBLER_MESSAGE_ASSEMBLESCANSREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace laser_assembler
{
template <class ContainerAllocator>
struct AssembleScansRequest_
{
  typedef AssembleScansRequest_<ContainerAllocator> Type;

  AssembleScansRequest_()
    : begin()
    , end()  {
    }
  AssembleScansRequest_(const ContainerAllocator& _alloc)
    : begin()
    , end()  {
  (void)_alloc;
    }



   typedef ros::Time _begin_type;
  _begin_type begin;

   typedef ros::Time _end_type;
  _end_type end;





  typedef boost::shared_ptr< ::laser_assembler::AssembleScansRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::laser_assembler::AssembleScansRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AssembleScansRequest_

typedef ::laser_assembler::AssembleScansRequest_<std::allocator<void> > AssembleScansRequest;

typedef boost::shared_ptr< ::laser_assembler::AssembleScansRequest > AssembleScansRequestPtr;
typedef boost::shared_ptr< ::laser_assembler::AssembleScansRequest const> AssembleScansRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::laser_assembler::AssembleScansRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::laser_assembler::AssembleScansRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::laser_assembler::AssembleScansRequest_<ContainerAllocator1> & lhs, const ::laser_assembler::AssembleScansRequest_<ContainerAllocator2> & rhs)
{
  return lhs.begin == rhs.begin &&
    lhs.end == rhs.end;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::laser_assembler::AssembleScansRequest_<ContainerAllocator1> & lhs, const ::laser_assembler::AssembleScansRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace laser_assembler

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::laser_assembler::AssembleScansRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::laser_assembler::AssembleScansRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::laser_assembler::AssembleScansRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::laser_assembler::AssembleScansRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::laser_assembler::AssembleScansRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::laser_assembler::AssembleScansRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::laser_assembler::AssembleScansRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b341004f74e15bf5e1b2053a9183bdc7";
  }

  static const char* value(const ::laser_assembler::AssembleScansRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb341004f74e15bf5ULL;
  static const uint64_t static_value2 = 0xe1b2053a9183bdc7ULL;
};

template<class ContainerAllocator>
struct DataType< ::laser_assembler::AssembleScansRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "laser_assembler/AssembleScansRequest";
  }

  static const char* value(const ::laser_assembler::AssembleScansRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::laser_assembler::AssembleScansRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The time interval on which we want to aggregate scans\n"
"time begin\n"
"# The end of the interval on which we want to assemble scans or clouds\n"
"time end\n"
;
  }

  static const char* value(const ::laser_assembler::AssembleScansRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::laser_assembler::AssembleScansRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.begin);
      stream.next(m.end);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AssembleScansRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::laser_assembler::AssembleScansRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::laser_assembler::AssembleScansRequest_<ContainerAllocator>& v)
  {
    s << indent << "begin: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.begin);
    s << indent << "end: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.end);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LASER_ASSEMBLER_MESSAGE_ASSEMBLESCANSREQUEST_H
