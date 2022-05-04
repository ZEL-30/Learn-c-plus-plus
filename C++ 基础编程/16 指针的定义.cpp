#include <iostream>
using namespace std;

int main()
{
	int a = 100;
	cout << "a = " << a << endl;
	int* pa = NULL;
	char* pb = NULL;
	pa = &a;
	*pa = 200;
	cout << "a�ĵ�ַΪ��" << (long)pa << endl;
	cout << "a+1�ĵ�ַΪ��" << (long)(pa + 1) << endl;
	cout << "a = " << a << endl;

	cout << "int* ��ռ���ڴ�ռ�Ϊ��" << sizeof(pa) << endl;

	cout << "char* ��ռ���ڴ�ռ�Ϊ��" << sizeof(pb) << endl;

	system("pause");

	return 0;
} 