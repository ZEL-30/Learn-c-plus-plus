#include <iostream>
using namespace std;



int main()
{
	//案例1
	int arr1[] = { 300,350,200,400,250 };
	int length_1 = sizeof(arr1) / sizeof(arr1[0]);
	int max = 0;
	int num = 0;
	for (int i = 0; i < length_1 - 1; i++) 
	{	
		
		if (arr1[i] > max)
		{
			max = arr1[i];
			num = i;
		}
		else
			continue;
	}

	for (int j = 0; j < length_1; j++)
	{
		cout << arr1[j] << " ";
	}
	cout << endl;
	cout << "最重的小猪是在第" << num << "位" << endl;
	cout << "最重的小猪的体重是：" << max << "斤" << endl;

	//案例2 数组元素逆置
	int arr2[] = { 1,3,3,4,5,6,7,4,9};
	int length = sizeof(arr2) / sizeof(arr2[0]);
	cout << "数组元素为：" << endl;
	for (int i = 0; i < length; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;
	//逆置
	int temp = 0;
	if (length % 2 == 1)
	{
		for (int i = 0; i < (length / 2) + 1; i++)
		{
			temp = arr2[i];
			arr2[i] = arr2[(length - 1) - i];
			arr2[(length - 1) - i] = temp;
		}
	}
	else
	{
		for (int i = 0; i < length / 2 ; i++)
		{
			temp = arr2[i];
			arr2[i] = arr2[(length - 1) - i];
			arr2[(length - 1) - i] = temp; 
		}
	}

	cout << "逆置后的数组元素为：" << endl;
	for (int i = 0; i < length; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;


	system("pause");

	return 0;
}




#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 1,5,8,9,4,3,7 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int order = sizeof(arr) / sizeof(arr[0]) - 1;
	cout << "原数组为：" << endl;
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int start = 0;
	int end = order;
	int temp = 0;

	while (start <= end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	cout << "交换后为：" << endl;
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;



	system("pause");
	return 0;
}