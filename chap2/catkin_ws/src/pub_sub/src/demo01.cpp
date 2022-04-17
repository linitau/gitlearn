#include"ros/ros.h"
#include<sstream>
#include"std_msgs/String.h"
using namespace std;
int main(int argc, char *argv[])
{
    ros::init(argc,argv,"pub");
    ros::NodeHandle nh;//节点句柄
    ros::Publisher pub=nh.advertise<std_msgs::String>("fang", 10);//创建发布者对象

    std_msgs::String msg;
    stringstream ss;
    ros::Rate rate(10);//以10hz的频率发布消息
    ros::Duration(2).sleep();//防止数据在创建过程中数据过早发布导致丢失
    int count=0;
    while(ros::ok())
    {
        ss.clear();//清空流的错误标记
	ss.str("");//清空缓存
	ss << "hello " << count;
	msg.data=ss.str();
        pub.publish(msg);
	ROS_INFO(ss.str().c_str());

        count++;
	rate.sleep();
	ros::spinOnce();
    }
    return 0;
}
