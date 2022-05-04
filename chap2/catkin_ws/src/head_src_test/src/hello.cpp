#include "ros/ros.h"
#include "head_src_test/hello.h"
void hello_ns::MyHello::run()
{
    ROS_INFO("source hello run ");
}
