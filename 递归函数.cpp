#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int f(int x)
{
	if (x == 0) return 0;
	return x + f(x - 1);
}
//3+f(2)
//	2+f(1)
//    1+f(0)
//		 0
//结果因该为6
int main()
{
	cout << "f(3)=" << f(3) << endl;
}
