#include <iostream>
using namespace std;


int main()
{
	int arr[] = { 25,36,30,36,10,56,12 };
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//选择排序
	for (int i = 0; i < length; i++)
	{
		int Min = i;   //认定一个最小的数的下标
		for (int j = i + 1; j < length; j++)
		{
			if (arr[Min] > arr[j])
			{
				Min = j;  //更新最小值的下标
			}
		}

		if (Min != i)    //如果下标有变化，就交换元素，更新最小元素
		{
			int temp = arr[i];
			arr[i] = arr[Min];
			arr[Min] = temp;
		}
	}

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	system("cls");
	return 0;
}