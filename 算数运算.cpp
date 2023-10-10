#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 3;
	cout << a / b << endl;
	cout << (float)a / b << endl;
	float c = a / b;
	cout << c << endl;
	double d = a / b;
	cout << d << endl;
	int e = (double)a / b;
	cout << e << endl;
	double f = (double)a / b;
	cout << f << endl;
}