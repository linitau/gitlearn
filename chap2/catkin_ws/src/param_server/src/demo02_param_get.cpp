#include"ros/ros.h"

/*
  演示参数查询
  实现：
    ros::NodeHandle
    ros::param
*/
int main(int argc, char *argv[])
{
    ros::init(argc, argv, "check");
    ros::NodeHandle nh;
    double radius=nh.param("radius",0.5);//1.第二个参数是默认参数，当不存在返回默认值
    ROS_INFO("radius=%.2f", radius);

    double radius2;
    bool res=nh.getParam("radius", radius2);//2.返回的是true或false
    bool res1=nh.getParamCached("radius", radius2);//3.与2类似，但是效率更高
    if(res)
    {
        ROS_INFO("radius2=%.2f", radius2);
    }
    else
        ROS_INFO("no value");

    //4.getParamNames
    std::vector<std::string> names;
    nh.getParamNames(names);
    for(int i=0;i<names.size();i++)
    {
        ROS_INFO("Param Name: %s", names[i].c_str());
    }
    //5.hasParam
    bool flag1=nh.hasParam("radius");
    bool flag2=nh.hasParam("radiusx");
    ROS_INFO("radius exit? %d", flag1);
    ROS_INFO("radiusx exit? %d", flag2);
    //6.searchParam()
    std::string key;
    nh.searchParam("radius",key);
    ROS_INFO("search result: %s", key.c_str());
    //---------ros::param-----------//
    double radius_param=ros::param::param("radius",100.5);
    ROS_INFO("radius_param= %.2f", radius_param);

    std::vector<std::string> names_param;
    ros::param::getParamNames(names_param);
    for(int i=0;i<names_param.size();i++)
    {
        ROS_INFO("key %s", names_param[i].c_str());
    }
    return 0;
}
