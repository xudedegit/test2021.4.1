#include <iostream>

using namespace std;

int arr[3][3] = { {100,100,100},{90,50,100},{60,70,80} };

int main()
{

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			
			sum += arr[i][j];
			if (i == 0&&j==2)
			{
				cout << "张三的总成绩为:" << sum << endl;
			}
			else if (i == 1 && j == 2)
			{
			
				cout << "李四的总成绩为:" << sum << endl;
			}
			else if (i == 2 && j == 2)
			{
			
				cout << "王五的总成绩为:" << sum << endl;
			}
		
		}
	
	}
	system("pause");
	return 0;

}