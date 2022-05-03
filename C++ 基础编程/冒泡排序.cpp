//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//int arr[] = {4,2,8,0,5,7,1,3,9};
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int order= sizeof(arr)/sizeof(arr[0]) - 1;
//	cout << "Ã°ÅÝÅÅÐòÇ°£º" << endl;
//	for (int i = 0; i <= order; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	cout << "------------------------------------\n";
//	//Ã°ÅÝÅÅÐò
//	int temp = 0;
//	for (int i = 0; i < order; i++)
//	{
//		int stop = 0;
//		for (int j = 0; j < order; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp; 
//				stop++;
//			}
//		}
//
//		if (stop == 0)
//			break;
//		for (int i = 0; i <= order; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//
//	cout << "Ã°ÅÝÅÅÐòºó£º" << endl;
//	for (int i = 0; i <= order; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	system("pause");
//
//	return 0;
//} 
