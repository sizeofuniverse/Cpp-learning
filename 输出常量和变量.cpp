#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define MONTHS 12
#define PI 3.14
using namespace std;//省略了好多的std::
int main()
{
	string name = "xxx";
	cout << "你的名字是：" << name << '\n' << "一年有" << 
		//<<与输出的内容可以分离
		MONTHS
		//\n可以与写在双引号内 
		<< "个月\n"<< "圆周率为：" << PI << endl;

}
