#include <iostream>
using namespace std;



//��Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;  //�ֲ���������������е�   ջ��
	return a;
}

//�����ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
	static int a = 10;
	return a;
}




int main()
{
	int& ref = test02();
	cout << ref << endl;

	test02() = 1000;   //�����ĵ��ÿ�����Ϊ��ֵ
	cout << ref << endl;

	system("pause");
	return 0;

}