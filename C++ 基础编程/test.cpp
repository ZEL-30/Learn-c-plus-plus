//#include <iostream>
//using namespace std;
//
//int main()
//{
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	int order = 0;
//	cout << "你想要删除第几个元素：" << endl;
//	cin >> order;
//	int site = order - 1;
//	for (int i = site; i<len; i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//	len--;
//	cout << "删除后：" << endl;
//
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//
//
//
//
//
//
//	system("pause");
//
//	return 0;
//} 