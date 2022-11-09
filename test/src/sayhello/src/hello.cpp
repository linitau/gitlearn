#include"ros/ros.h"
#include <iostream>

int main(int argc, char * argv[])
{
    ros::init(argc, argv,"OK");
    while(1)
    {
        ROS_INFO("I say hello\n");
    }
    return 0;
}
