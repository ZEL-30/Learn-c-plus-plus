#include "Array.hpp"


void test01()
{
	Array<int> arr1(10);
	arr1.push_back(10);
	arr1.push_back(20);
	arr1.push_back(30);
	Array<int> arr2(arr1);
	arr2.pop_back();

	//cout << arr1[0] << endl;
	//cout << arr2[1] << endl;

	cout << arr1;
	cout << arr2;
}



int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}