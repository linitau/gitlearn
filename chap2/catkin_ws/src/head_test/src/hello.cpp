#include"ros/ros.h"
#include"head_test/hello.h"
namespace hello_ns
{
void MyHello::run()
{
    ROS_INFO("hello boy");
}

}
int main(int argc, char* argv[])
{
    ros::init(argc, argv, "hello_head");
    hello_ns::MyHello myhello;
    myhello.run();

    return 0;
}
