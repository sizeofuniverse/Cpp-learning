#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	bool score;
	cout << "���Ƿ�ͨ������������?��1-ͨ���ˣ�0-ûͨ����";
	cin >> score;
	if (score)
	{
		cout << "��ϲ��" << endl;
	}
	else
	{
		cout << "��������" << endl;
	}
	//C++�У�����Ϊ�������ı�־
	int pe = 0;
	double agree = 0;
	bool stu;
	cout << "���Ƿ��Ǽ�ͥ��������ѧ������1-�ǣ�0-���ǣ�" ;
	cin >> stu;
	cout << "��ļ����Ƕ��٣�";
	cin >> agree;
	cout << "������ɼ��Ƕ���:";
	cin >> pe;
	if (stu)
	{
		if (agree > 3.0)
		{
			if (pe > 70)
			{
				cout <<"�����������־��ѧ��";
			}
			else
			{
				cout << "�㲻��������־��ѧ��";
			}
		}
		else
		{
			cout << "�㲻��������־��ѧ��";
		}
	}
	else
	{
		cout << "�㲻��������־��ѧ��";
	}
	//if����Ƕ��ʹ��

}