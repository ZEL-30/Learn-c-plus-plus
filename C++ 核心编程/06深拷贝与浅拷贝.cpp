#include <iostream>
using namespace std;

class Person
{
public:
	Person                                                                   ()
	{
		cout << "Ĭ�Ϲ��캯������" << endl;
	}

	Person(int a, int height)
	{
		age = a;
		Height = new int(height);
		cout << "�вι��캯������" << endl;
	}

	Person(const Person& p)
	{
		age = p.age;

		//�������   ����ʹ���Լ������Ŀ������캯�����ڶ�����������
		Height = new int(*p.Height);
		cout << "�������캯������" << endl;
	}

	~Person()
	{
		if (Height != NULL)
		{
			delete Height;
			Height = NULL;
		}
		cout << "����������������" << endl;
	}


	int age;
	int* Height;
};


void test01()
{
	Person p1(10,177);

	Person p2(p1);
	cout << "����Ϊ��" << p2.age << endl;
	cout << "����Ϊ��" << *p2.Height << endl;
}






int main()
{
	test01();

	system("pause");
	return 0;
}