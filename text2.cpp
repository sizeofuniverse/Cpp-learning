#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	// 字符与整数，ASCII对应，显示那个却决于变量类型
	int a = 'X';
	cout << a << endl;
	char b = 'X';
	cout << b << endl;
	// 字符可以与整数进行运算
	int c = 'X'+3;
	cout << c << endl;
	char d = 'X'+3;
	cout << d << endl;
	
	//转义字符：单引号和双引号

	cout << "你还\"好\"吗？" << endl;
	cout << '"' << endl;
	cout << "hi'hi'hi" << endl;
	cout << '\'' << endl;

	//C++的原始字面量

	//不再需要转义
	string a = R"(C:\Download)";
	cout << a << endl;

	//达到更好的显示效果
	string str = "<no>0001</no>\
        <name>西施</name>\
        <sc>火树银花</sc>\
        <yz>沉鱼</yz>\
        <age>23</age>\
        <weight>48.5</weight>\
        <height>170</height>)";//斜线连接字符串
	cout << str << endl;


	string str1 = R"(
        <no>0001</no>
        <name>西施</name>
        <sc>火树银花</sc>
        <yz>沉鱼</yz>
        <age>23</age>
        <weight>48.5</weight>
        <height>170</height>)";//不再需要斜线，而且显示效果更好
	cout << str1 << endl;

}