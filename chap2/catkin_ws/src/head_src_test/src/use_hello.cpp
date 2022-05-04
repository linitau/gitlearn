#include"ros/ros.h"
#include"head_src_test/hello.h"
int main(int argc, char *argv[])
{
    ros::init(argc, argv, "source_test");
    hello_ns::MyHello myhello;
    myhello.run();
    return 0;
}
