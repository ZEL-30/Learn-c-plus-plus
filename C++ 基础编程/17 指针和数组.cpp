#include <iostream>
using namespace std;

int main()
{
	//指针和数组
	//利用指针访问数组中的元素
	int arr[] = { 4,5,8,9,6,7 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int* pa = arr;
	cout << "数组为： " << endl;
	for (int i = 0; i < length; i++)
	{
		cout <<*(pa + i) << " ";

	}
	cout << endl;

	cout << "赋值后为： " << endl;
	for (int i = 0; i < length; i++)
	{
		*(pa + i) = i * 10;
	}
	for (int i = 0; i < length; i++)
	{
		cout << *(pa + i) << " ";   
	}
	cout << endl;
	int* pb = 0;
	cout << (long long)pa << endl;
	cout << pa + 4 << endl;
	pb = pa + 4;
	cout << (long long)pb<< endl;

	system("pause");

	return 0;
} 