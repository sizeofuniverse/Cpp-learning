#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//����1�ۼӵ�100�ĺ�
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
	//ѭ��ʵ��add1
	cout << add1() << endl;
	//�ݹ�ʵ��add2
	cout << add2() << endl;
}