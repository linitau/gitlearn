#include"ros/ros.h"

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "change_color");
    ros::NodeHandle nh("turtlesim");//命名空间
    nh.setParam("background_r",255);
   
    return 0;
}
