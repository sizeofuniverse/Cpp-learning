#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	bool once = 0;
	while (true)
	{
		if (once)
		{
			bool exit = 1;
			cout << "�Ƿ������Ϸ(1-�ǣ�0-��)";
			cin >> exit;
			if (exit == 0) break;
		}
		once = 1;

		int a = 1;
		cout << "��Ϸ��ʼ\n";
		cout << "1+1=";
		cin >> a;
		if (a == 2) cout << "�����" << endl;
		else cout << "�����" << endl;
		continue;
	}
	cout << "�ټ�";
}