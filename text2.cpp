#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	// �ַ���������ASCII��Ӧ����ʾ�Ǹ�ȴ���ڱ�������
	int a = 'X';
	cout << a << endl;
	char b = 'X';
	cout << b << endl;
	// �ַ�������������������
	int c = 'X'+3;
	cout << c << endl;
	char d = 'X'+3;
	cout << d << endl;
	
	//ת���ַ��������ź�˫����

	cout << "�㻹\"��\"��" << endl;
	cout << '"' << endl;
	cout << "hi'hi'hi" << endl;
	cout << '\'' << endl;

	//C++��ԭʼ������

	//������Ҫת��
	string a = R"(C:\Download)";
	cout << a << endl;

	//�ﵽ���õ���ʾЧ��
	string str = "<no>0001</no>\
        <name>��ʩ</name>\
        <sc>��������</sc>\
        <yz>����</yz>\
        <age>23</age>\
        <weight>48.5</weight>\
        <height>170</height>)";//б�������ַ���
	cout << str << endl;


	string str1 = R"(
        <no>0001</no>
        <name>��ʩ</name>
        <sc>��������</sc>
        <yz>����</yz>
        <age>23</age>
        <weight>48.5</weight>
        <height>170</height>)";//������Ҫб�ߣ�������ʾЧ������
	cout << str1 << endl;

}