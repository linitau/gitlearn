#include"ros/ros.h"
#include"turtlesim/Pose.h"
/*
    需求：订阅乌龟的位姿信息，并输出到控制台
*/
void callback(const turtlesim::Pose::ConstPtr &pose)
{
    ROS_INFO("pose->x: %.2f",pose->x);
    ROS_INFO("pose->angular->z: %.2f", pose->angular_velocity);
}
int main(int argc, char* argv[])
{
    ros::init(argc, argv, "pub_pose");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe("/turtle1/pose",10,callback);
    ros::spin();
    return 0;
}
