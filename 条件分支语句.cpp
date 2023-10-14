#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	bool score;
	cout << "你是否通过四六级考试?（1-通过了；0-没通过）";
	cin >> score;
	if (score)
	{
		cout << "恭喜你" << endl;
	}
	else
	{
		cout << "继续加油" << endl;
	}
	//C++中，；作为语句结束的标志
	int pe = 0;
	double agree = 0;
	bool stu;
	cout << "你是否是家庭经济困难学生？（1-是；0-不是）" ;
	cin >> stu;
	cout << "你的绩点是多少：";
	cin >> agree;
	cout << "你的体测成绩是多少:";
	cin >> pe;
	if (stu)
	{
		if (agree > 3.0)
		{
			if (pe > 70)
			{
				cout <<"你可以申请励志奖学金";
			}
			else
			{
				cout << "你不能申请励志奖学金";
			}
		}
		else
		{
			cout << "你不能申请励志奖学金";
		}
	}
	else
	{
		cout << "你不能申请励志奖学金";
	}
	//if语句的嵌套使用

}