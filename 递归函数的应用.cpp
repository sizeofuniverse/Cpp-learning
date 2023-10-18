#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//计算1累加到100的和
int add1()
{
	int sum = 0;
	for (int a = 1; a <= 100; a++)
	{
		sum += a;
	}
	return sum;
}
int add2()
{
	static int sum = 0;
	static int a = 1;
	sum += a++;
	if (a <= 100) add2();
	return sum;
}
int main()
{
	//循环实现add1
	cout << add1() << endl;
	//递归实现add2
	cout << add2() << endl;
}