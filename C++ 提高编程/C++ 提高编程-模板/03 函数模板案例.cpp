#include <iostream>
using namespace std;

//ʵ��һ��ͨ�� �������������
//���� ����
//�㷨 ����

template <class T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}


template <class T>
void SelectSort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int Max = i;  //�϶����ֵ���±�
		for (int j = i + 1; j < len; j++)
		{
			if (arr[Max] < arr[j])
			{
				Max = j;
			}
		}

		if (Max != i)
		{
			Swap(arr[i], arr[Max]);
		}
	}
}


//�ṩ��ӡ����ģ��
template <class T>
void Print(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}




int main()
{
	int arr1[] = { 25,36,30,36,10,56,12 };
	int length1 = sizeof(arr1) / sizeof(arr1[0]);
	Print(arr1,length1);

	SelectSort(arr1, length1);

	cout << "ѡ���������" << endl;
	Print(arr1, length1);

	char arr2[] = { 'x','a','v','r','w','k','h'};
	int length2 = sizeof(arr2) / sizeof(arr2[0]);
	Print(arr2, length2);

	SelectSort(arr2, length2);

	cout << "ѡ���������" << endl;
	Print(arr2, length2);

	system("pause");
	system("cls");
	return 0;
}