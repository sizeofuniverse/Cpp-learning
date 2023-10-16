#define _crt_secure_no_warnings
#include <iostream>
using namespace std;
void func(int b);
int main()
{
	int a = 0;
	func(a);
	cout << a << endl;
}
void func(int b)
{
	b++;
	cout << b << endl;
}
