#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	//sizeof �ƶ�����ռ���ڴ�Ĵ�С��
	cout << "sizeof(int)" << sizeof(int) << endl;
	cout << "sizeof(unsigned)" << sizeof(unsigned) << endl;
	cout << "sizeof(short)" << sizeof(short) << endl;
	cout << "sizeof(unsigned short)" << sizeof(unsigned short) << endl;
	cout << "sizeof(long)" << sizeof(long) << endl;
	cout << "sizeof(unsigned long)" << sizeof(unsigned long) << endl;

	//C++11�е�long long ����
	unsigned i = -100;
	cout << i << endl;
	long long a;
	cout<<sizeof(a);
	
	
	//������
	cout << "sizeof(float)" << sizeof(float) << endl;
	cout << "sizeof(double)" << sizeof(double) << endl;
	cout << "sizeof(long double)" << sizeof(long double) << endl;
	float i = 123.4567f;
	cout << "i=" << i << endl;
	float j = 123.456789789f;//������7λ��Ч����
	cout << "j=" << i << endl;
	
	//C++ȱʡ��ʾ
	double i = 123456789.123456789;
	cout << i << endl;
	printf("%lf\n", i);
	double j = 12345678912345678.9;
	cout << j << endl;
	printf("%lf\n", j);

}