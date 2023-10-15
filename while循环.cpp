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
			cout << "是否继续游戏(1-是；0-否)";
			cin >> exit;
			if (exit == 0) break;
		}
		once = 1;

		int a = 1;
		cout << "游戏开始\n";
		cout << "1+1=";
		cin >> a;
		if (a == 2) cout << "答对了" << endl;
		else cout << "答错了" << endl;
		continue;
	}
	cout << "再见";
}