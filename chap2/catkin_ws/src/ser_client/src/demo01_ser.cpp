#include"ros/ros.h"
#include"ser_client/AddInt.h"

/*
服务端实现：解析客户端提交的数据，并运算再产生响应
  1、包含头文件
  2、初始化ROS结点
  3、创建结点句柄
  4、创建一个服务对象
  5、处理请求并产生响应
  6、spin()
*/
bool doNums(ser_client::AddInt::Request &request, ser_client::AddInt::Response &response)
{
    //1、处理请求
    int num1=request.num1;
    int num2=request.num2;
    ROS_INFO("recieved number:%d, %d",num1, num2);
    //2、组织响应
    int sum=num1+num2;
    response.sum=sum;
    ROS_INFO("result sum is: %d", sum);

    return true;
}
int main(int argc, char *argv[])
{
    ros::init(argc,argv,"Service");
    ros::NodeHandle nh;
    ros::ServiceServer server=nh.advertiseService("addint",doNums);
    ROS_INFO("service start!");
    
    ros::spin();
    return 0;
}
