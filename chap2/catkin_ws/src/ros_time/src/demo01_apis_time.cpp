#include"ros/ros.h"

/*
    需求1：演示时间相关操作（获取当前时刻+设置指定时刻）
    需求2：程序执行中停顿几秒
    需求3：已知程序开始运行的时刻和程序运行的时间，求运行结束的时刻
    需求4：每隔一秒输出一段文本
*/
void callback(const ros::TimerEvent& event)
{
    ROS_INFO("--");
    ROS_INFO("函数调用的时刻: %.2f",event.current_real.toSec());
}
int main(int argc, char *argv[])
{
    ros::init(argc, argv, "time");
    ros::NodeHandle nh;//注意：必须的，否则会导致时间api调用失败（在NodeHandle会初始化时间操作）
    //当前时刻：被调用执行的那一刻
    //参考系：1970年1月1日 00:00:00
    ros::Time right_now = ros::Time::now();
    ROS_INFO("right_time: %.2f",right_now.toSec());
    ROS_INFO("right_time1: %d", right_now.sec);

    ros::Time t1(20,300);//s, ns
    ros::Time t2(20.43);
    ROS_INFO("t1= %.2f", t1.toSec());
    ROS_INFO("t1= %.2f", t2.toSec());
    //------------------------------//
    ROS_INFO("duration time -----------");
    ros::Duration du(5);
    du.sleep();
    ROS_INFO("sleep end");
    //-------------//
    ROS_INFO("time calc");
    ros::Time begin = ros::Time::now();
    ros::Duration du1(5);
    ros::Time stop = begin+du1;//also can minus
    ROS_INFO("start time: %.2f", begin.toSec());
    ROS_INFO("end time: %.2f",stop.toSec());
    //shike he shike zhijian yunsuan
    //ros::Time sum = begin+stop;//mistake do not can plus
    ros::Duration du2 = begin - stop;
    ROS_INFO("time oclock minus: %.2f", du2);
    //duration and duration calc
    ros::Duration du3=du1+du2;
    ros::Duration du4=du1-du2;
    ROS_INFO("du1+du2: %.2f", du3.toSec());
    ROS_INFO("du1-du2: %.2f", du4.toSec());
    //duration time and duration time calc
    //4
    //1)
    //ros::Rate rate(1);
    //2)
    ROS_INFO("Timer");
    ros::Timer timer = nh.createTimer(ros::Duration(1),callback,false,false);//时间间隔，回调函数，是否一次性，自动启动(设置为false时，需要手动调用timer.start())
    timer.start();//手动启动
    ros::spin();

    return 0;
}
