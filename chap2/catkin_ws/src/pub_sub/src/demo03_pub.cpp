#include<iostream>
#include"ros/ros.h"
#include"pub_sub/Person.h"
int main(int argc, char *argv[])
{
    ros::init(argc,argv,"pub");
    ros::NodeHandle nh;
    ros::Publisher pub=nh.advertise<pub_sub::Person>("car",10);
    ros::Rate loop_rate(10);
    pub_sub::Person person;
    person.name="Lily";
    person.age=18;
    person.height=1.75;
    ros::Duration(1).sleep();
    while(ros::ok())
    {
        person.age++;
        pub.publish(person);
	loop_rate.sleep();
	ros::spinOnce();
    }
    return 0;
}
