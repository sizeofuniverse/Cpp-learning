#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	string name;
	int age;
	double weight;
	char sex;
	bool yz;
	cout << "请输入你的姓名：";
	cin >> name;//这里会自动换行
	cout << "你的姓名是：" << name << endl;
	cout << "请输入你的年龄：";
	cin >> age;
	cout << "你的年龄是：" << age << endl;
	cout << "请输入你的体重：";
	cin >> weight;
	cout << "你的体重是：" << weight << endl;
	cout << "请输入你的性别（X-男，Y-女）：";
	cin >> sex;
	cout << "你的性别是：" << sex << endl;
	cout << "你认为自己的颜值高不高(1-高，0-低)：";
	cin >> yz;
	cout << "你的颜值：" << yz << endl;
}