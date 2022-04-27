#include"ros/ros.h"
/*
    演示参数的删除
    实现：
        ros::NodeHandle
	    delParam()
	ros::param
	    del()
*/
int main(int argc, char *argv[])
{
    ros::init(argc, argv, "delete_param");
    ros::NodeHandle nh;
   
    //删除：NodeHandle  删除type_param参数
    bool flag1 = nh.deleteParam("type_param");
    if(flag1)
        ROS_INFO("sucess");
    else
        ROS_INFO("failed");
    //删除:ros::param   删除radius参数
    bool flag2 = ros::param::del("radius");
    if(flag2)
        ROS_INFO("sucess");
    else
        ROS_INFO("failed");


    return 0;
}
