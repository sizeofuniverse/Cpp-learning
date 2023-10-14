#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	//判断年份是不是闰年
	//条件：1.被4整除而不被10整除；2.被400整除。满足一个即可
	int year = 0;
	cout << "请输入当前的年份：";
	cin >> year;
	year = (year % 10 == 0) ? (year % 400 == 0 ? 1 : 0) : (year % 4 == 0 ? 1 : 0);
	switch (year)
	{
	case 1:
		cout << "是闰年";
		break;
	case 0:
		cout << "不是闰年";
		break;
	default:
		;
	}
}