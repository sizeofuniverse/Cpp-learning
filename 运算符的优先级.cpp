#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	a = b = 10;
	c = 5;
	int d = a / b / c;
	int e = a / (b / c);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	7;//不会报错，赋值运算结合律从右向左
	cout << "d=" << d << endl;
	cout << "e=" << e << endl;
}