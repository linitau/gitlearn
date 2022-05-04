#include"ros/ros.h"
#include"turtlesim/Spawn.h"

/*
    需求：向服务器发送请求，生成一只新的乌龟
*/
int main(int argc, char* argv[])
{
    ros::init(argc, argv, "ser_call");
    ros::NodeHandle nh;
    ros::ServiceClient client = nh.serviceClient<turtlesim::Spawn>("/spawn"); 
    turtlesim::Spawn spawn;
    spawn.request.x = 1.0;
    spawn.request.y = 3.0;
    spawn.request.theta = 1.0;
    spawn.request.name = "turtle2";
    ros::param::set("/turtlesim/background_b",0);//修改窗口背景颜色

    ros::service::waitForService("/spawn");
    bool flag = client.call(spawn);
    if(flag)
        ROS_INFO("sucess!");
    return 0;

}
