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

	//ѡ������
	for (int i = 0; i < length; i++)
	{
		int Min = i;   //�϶�һ����С�������±�
		for (int j = i + 1; j < length; j++)
		{
			if (arr[Min] > arr[j])
			{
				Min = j;  //������Сֵ���±�
			}
		}

		if (Min != i)    //����±��б仯���ͽ���Ԫ�أ�������СԪ��
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