#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int a = 10;
int main()
{
	int a = 20;
	cout << a << endl;//ʹ�õ��Ǿֲ�����
	cout << ::a << endl;//ʹ�õ���ȫ�ֱ���
}
