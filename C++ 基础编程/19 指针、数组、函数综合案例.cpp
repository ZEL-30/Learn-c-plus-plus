#include "bubble.h"

int main()
{
	int arr[] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(arr[0]);;
	cout << "Ԫ����Ϊ��" << endl;
	Print_Arr(arr, len);

	int* arr_p = Bubble(arr,len);

	cout << "����ð����������Ϊ��" << endl;
	Print_Arr(arr, len);


	system("pause");

	return 0;
} 
