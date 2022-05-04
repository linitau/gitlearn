#include"ros/ros.h"

int main(int argc, char* argv[])
{
    ros::init(argc, argv, "ros_state");
    ros::NodeHandle nh;
    ros::Duration rate(1);
    int count = 1;
    while(ros::ok())
    {
        if(count >= 10)
	    ros::shutdown();//结点关闭api
        ROS_INFO("hello %d", count);
	count++;
	rate.sleep();
	ros::spinOnce();
    }
    return 0;
}
