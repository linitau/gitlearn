#include"ros/ros.h"
#include"ser_client/AddInt.h"

/*
  客户端：提交两个整数，并处理响应的结果
  1、包含头文件
  2、初始化ROS结点
  3、创建结点句柄
  4、创建一个客户端对象
  5、提交请求并处理响应
  实现参数的动态提交：
  1、格式rosrun xxx xxx 12 34 
  2、结点执行时，需要获取命令中的参数，并组织进request
  问题：
    如果先启动客户端，那么请求会报异常
  需求：
    如果先启动客户端，不要直接抛出异常，而是挂起，等服务器启动后，再正常请求
  解决：
    在ROS中内置了相关函数，这些函数可以让客户端启动后挂起，等待服务器启动
*/
int main(int argc, char* argv[])
{
    if(argc!=3)
    {
        ROS_INFO("提交的参数个数不对");
	return 1;
    }
   
    ros::init(argc, argv, "client");
    ros::NodeHandle nh;
    ros::ServiceClient client=nh.serviceClient<ser_client::AddInt>("addint");
    ser_client::AddInt ai;
    ai.request.num1=atoi(argv[1]);
    ai.request.num2=atoi(argv[2]);

    //处理响应——调用判断服务器状态的函数
    //client.waitForExistence(); //或
    ros::service::waitForService("addint");//传参-服务话题

    bool flag=client.call(ai);
    if(flag)
    {
        ROS_INFO("result= %d ",ai.response.sum);
    }
    else
    {
        ROS_INFO("error");
    }
       
    return 0;
}
