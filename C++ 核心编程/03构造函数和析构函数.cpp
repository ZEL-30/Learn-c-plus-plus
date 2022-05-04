#include <iostream>
using namespace std;

class Person
{
public:
	Person()    //���캯��
	{
		cout << "���ǹ��캯���ĵ���" << endl;
	}

	~Person()   //��������
	{
		cout << "�������������ĵ���" << endl;
	}

};

void test01()
{
	Person p;
}

int main()
{
	test01();
	Person p;

	system("pause");
	return 0;
}