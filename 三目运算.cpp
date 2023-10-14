#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	//实现两个数比大小
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "请输入a的值：";
	cin >> a;
	cout << "请输入b的值：";
	cin >> b;
	c = (a > b) ? a : b;
	cout << "较大值为：" << c << endl;
}
