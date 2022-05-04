#include <iostream>
using namespace std;

//��������Ĭ��ֵ
int func(int a = 10, int b = 20, int c = 30)
{
	return a + b + c;
}

//����ռλ����
int func1(int a, int)
{
	return a;
}


int main()
{
	cout << func(20) << endl;

	system("pause");
	return 0;
}