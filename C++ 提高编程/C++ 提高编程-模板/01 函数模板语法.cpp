#include <iostream>
using namespace std;

//����ģ��
template<typename T> //����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ������T��һ��ͨ�õ���������
void Swap(T &a,T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	double c = 1.1;
	double d = 2.2;

	//���ַ�ʽʹ�ú���ģ��
	//1���Զ������Ƶ�
	Swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//2����ʾָ������
	Swap<double>(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	system("pause");
	system("cls");
	return 0;
}