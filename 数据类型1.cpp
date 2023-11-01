#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	//sizeof 推断整型占用内存的大小。
	cout << "sizeof(int)" << sizeof(int) << endl;
	cout << "sizeof(unsigned)" << sizeof(unsigned) << endl;
	cout << "sizeof(short)" << sizeof(short) << endl;
	cout << "sizeof(unsigned short)" << sizeof(unsigned short) << endl;
	cout << "sizeof(long)" << sizeof(long) << endl;
	cout << "sizeof(unsigned long)" << sizeof(unsigned long) << endl;

	//C++11中的long long 类型
	unsigned i = -100;
	cout << i << endl;
	long long a;
	cout<<sizeof(a);
	
	
	//浮点型
	cout << "sizeof(float)" << sizeof(float) << endl;
	cout << "sizeof(double)" << sizeof(double) << endl;
	cout << "sizeof(long double)" << sizeof(long double) << endl;
	float i = 123.4567f;
	cout << "i=" << i << endl;
	float j = 123.456789789f;//超出了7位有效数字
	cout << "j=" << i << endl;
	
	//C++缺省显示
	double i = 123456789.123456789;
	cout << i << endl;
	printf("%lf\n", i);
	double j = 12345678912345678.9;
	cout << j << endl;
	printf("%lf\n", j);

}