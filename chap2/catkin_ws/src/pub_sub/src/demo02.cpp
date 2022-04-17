#include<iostream>
#include"std_msgs/String.h"
#include"ros/ros.h"
#include"sstream"
using namespace std;
void CallBack(const std_msgs::String::ConstPtr &msg)
{
    ROS_INFO("I heard messages: %s", msg->data.c_str());
}
int main(int argc, char *argv[])
{
    //初始化ROS节点
    ros::init(argc,argv,"sub");
    //创建节点句柄
    ros::NodeHandle nh;
    //创建订阅者对象
    ros::Subscriber sub=nh.subscribe("fang",10,CallBack);//topic+callback function
    //处理订阅到的数据
    ros::spin();
    return 0;
}
