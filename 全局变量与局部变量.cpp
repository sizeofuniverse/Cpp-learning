#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int a = 10;
int main()
{
	int a = 20;
	cout << a << endl;//使用的是局部变量
	cout << ::a << endl;//使用的是全局变量
}
