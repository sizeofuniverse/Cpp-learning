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
	//用static修饰的局部变量生命周期和程序相同，并且只会被初始化一次
	int a = 10;
	static int b = 10;
	cout << "func a=" << a++ << endl;
	cout << "func b=" << b++ << endl;
}