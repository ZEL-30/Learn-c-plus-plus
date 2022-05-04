#include <iostream>
using namespace std;

//ջ������ע������  -- ��Ҫ���ؾֲ������ĵ�ַ
//ջ���������ɱ������������ٺ��ͷ�

int* func()
{
	int a = 20;  //�ֲ�����   �����ջ����ջ���������ں���ִ������Զ��ͷ�
	return &a;   //���ؾֲ������ĵ�ַ
}



int main()
{

	int* p = func();

	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	system("pause");
	return 0;
}