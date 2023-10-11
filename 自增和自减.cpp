#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	int i = 1;
	//a=i
	//i=i+1
	a = i++;
	cout << "a=" << a << endl;//1
	cout << "i=" << i << endl;//2
	int b = 0;
	int j = 1;
	//j=j+1
	//b=j
	b = ++j;
	cout << "b=" << b << endl;//2
	cout << "j=" << j << endl;//2
	
}