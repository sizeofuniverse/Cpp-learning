#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void func();
int main()
{
	func();
	func();
	func();
}
void func()
{
	//��static���εľֲ������������ںͳ�����ͬ������ֻ�ᱻ��ʼ��һ��
	int a = 10;
	static int b = 10;
	cout << "func a=" << a++ << endl;
	cout << "func b=" << b++ << endl;
}