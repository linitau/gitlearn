// Generated by gencpp from file ser_client/AddInt.msg
// DO NOT EDIT!


#ifndef SER_CLIENT_MESSAGE_ADDINT_H
#define SER_CLIENT_MESSAGE_ADDINT_H

#include <ros/service_traits.h>


#include <ser_client/AddIntRequest.h>
#include <ser_client/AddIntResponse.h>


namespace ser_client
{

struct AddInt
{

typedef AddIntRequest Request;
typedef AddIntResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddInt
} // namespace ser_client


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ser_client::AddInt > {
  static const char* value()
  {
    return "4781436a0c2affec8025955a6041e481";
  }

  static const char* value(const ::ser_client::AddInt&) { return value(); }
};

template<>
struct DataType< ::ser_client::AddInt > {
  static const char* value()
  {
    return "ser_client/AddInt";
  }

  static const char* value(const ::ser_client::AddInt&) { return value(); }
};


// service_traits::MD5Sum< ::ser_client::AddIntRequest> should match
// service_traits::MD5Sum< ::ser_client::AddInt >
template<>
struct MD5Sum< ::ser_client::AddIntRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ser_client::AddInt >::value();
  }
  static const char* value(const ::ser_client::AddIntRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ser_client::AddIntRequest> should match
// service_traits::DataType< ::ser_client::AddInt >
template<>
struct DataType< ::ser_client::AddIntRequest>
{
  static const char* value()
  {
    return DataType< ::ser_client::AddInt >::value();
  }
  static const char* value(const ::ser_client::AddIntRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ser_client::AddIntResponse> should match
// service_traits::MD5Sum< ::ser_client::AddInt >
template<>
struct MD5Sum< ::ser_client::AddIntResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ser_client::AddInt >::value();
  }
  static const char* value(const ::ser_client::AddIntResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ser_client::AddIntResponse> should match
// service_traits::DataType< ::ser_client::AddInt >
template<>
struct DataType< ::ser_client::AddIntResponse>
{
  static const char* value()
  {
    return DataType< ::ser_client::AddInt >::value();
  }
  static const char* value(const ::ser_client::AddIntResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SER_CLIENT_MESSAGE_ADDINT_H