#include <iostream>
using namespace std;

void test01()
{
	//定义二维数组 共有四种方式
	//1
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;

	for (int i = 0; i < 2; i++)
	{
	
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

}
void test02()
{
	//2
	int arr[2][3] = { {1,2,3},
						{4,5,6} };
	for (int i = 0; i < 2; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

}
void test03()
{

	int arr[2][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void test04()
{
	int arr[][3] = { 6,5,4,3,2,1 };
	for (int i = 0; i < 2; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{

	test04();
	cout<<sizeof()
	system("pause");
	return 0;
}