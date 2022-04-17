#include"ros/ros.h"
#include"pub_sub/Person.h"
void CallBack(const pub_sub::Person::ConstPtr &msg)
{
    ROS_INFO("name: %s, your age: %d, your height: %.2f", msg->name.c_str(), msg->age,msg->height);
}
int main(int argc, char* argv[])
{
    ros::init(argc,argv, "sub");
    ros::NodeHandle nh;
    ros::Subscriber sub=nh.subscribe("car",10,CallBack);
    
    ros::spin();
    return 0;
}

