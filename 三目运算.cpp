#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	//ʵ���������ȴ�С
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "������a��ֵ��";
	cin >> a;
	cout << "������b��ֵ��";
	cin >> b;
	c = (a > b) ? a : b;
	cout << "�ϴ�ֵΪ��" << c << endl;
}
