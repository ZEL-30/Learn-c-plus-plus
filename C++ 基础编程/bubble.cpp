#include "bubble.h"

// 函数主体

// 冒泡排序
int* Bubble(int* arr_p,int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1; j++)
		{
			int* right = arr_p + j;
			int* left = arr_p + (j + 1);
			if (*(right) > *(left))
			{
				int temp = *(right);
				*(right) = *(left);
				*(left) = temp;
			}
			
		}
	}

	return arr_p; 
}

// 打印数组
void Print_Arr(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}