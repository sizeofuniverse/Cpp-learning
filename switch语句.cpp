#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	//�ж�����ǲ�������
	//������1.��4����������10������2.��400����������һ������
	int year = 0;
	cout << "�����뵱ǰ����ݣ�";
	cin >> year;
	year = (year % 10 == 0) ? (year % 400 == 0 ? 1 : 0) : (year % 4 == 0 ? 1 : 0);
	switch (year)
	{
	case 1:
		cout << "������";
		break;
	case 0:
		cout << "��������";
		break;
	default:
		;
	}
}