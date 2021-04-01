#include <iostream>
using namespace std;


template <typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	mySwap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
void test02()
{
	float a = 1.1;
	float b = 2.2;
	mySwap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}