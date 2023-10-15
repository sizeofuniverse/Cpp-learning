#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	for (int a = 1; a <= 9; a++)
	{
		for (int b = 1; b <= a; b++)
		{
			cout << b << '*' << a << '=' << b * a << " ";
		}
		cout << endl;
	}
}