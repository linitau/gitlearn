#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    stringstream ss;
    ss << "hello world " << 123456;
    cout << ss.str().c_str();
    return 0;
}
