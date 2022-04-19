#include"ros/ros.h"

/*
  需要实现参数的新增与修改
  需求：
    首先设置机器人的共享参数，类型、半径
  实现：
    ros::NodeHandle
        setParam();
    ros::param
        set()
*/
int main(int argc, char *argv[])
{
    ros::init(argc,argv,"set_param");
    ros::NodeHandle nh;
    //参数增
    //case1
    nh.setParam("type","bicycle");
    nh.setParam("radius", 0.15);
    //case2
    ros::param::set("type_param","car");
    ros::param::set("radius_param",0.15);
    //参数改——只需要保证键是已经存在的，那么值会被覆盖
    //case1
    nh.setParam("radius",0.42);
    //case2
    ros::param::set("radius_param",32);

    return 0;

}

