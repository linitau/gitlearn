#include"ros/ros.h"                                                                                                       
 
int main(int argc, char* argv[])
{
    ros::init(argc, argv, "ros_log");
    ros::NodeHandle nh; 

    ROS_INFO("simple info");
    ROS_DEBUG("debug info");//will not put on the screen
    ROS_WARN("warning info");
    ROS_ERROR("error info");
    ROS_FATAL("fatal error"); 

    return 0;
}
