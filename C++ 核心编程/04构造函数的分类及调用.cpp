#include <iostream>
using namespace std;

class Person
{
public:

	//���캯��
	Person()         //�޲ι��� ���� Ĭ�Ϲ���
	{
		cout << "���ǹ��캯���ĵ���" << endl;
	}

	Person(int a)    //�вι���
	{
		age = a;
		cout << "�����вι��캯���ĵ���" << endl;
	}

	Person(const Person &p)        //�������캯�� 
	{
		age = p.age;   //������������ϵ��������ԣ��������ҵ�����
		cout << "���ǿ������캯���ĵ���" << endl;
	}


	//��������
	~Person()
	{
		cout << "�������������ĵ���" << endl;
	}


	int age;

};

//����
void test()
{
	//1.���ŷ� 
	//Person p1;       //��ͨ���캯��   ����Ĭ�Ϲ��캯��ʱ�򣬲�Ҫ�ӣ���
	//Person p2(10);   //�вι��캯��
	//Person p3(p2);   //�������캯��

	//ע������
	// ����Ĭ�Ϲ��캯��ʱ�򣬲�Ҫ�ӣ���
	//cout << "p2������:" << p2.age << endl;
	//cout << "p3������:" << p3.age << endl;


	//2.��ʾ�� 
	Person p1;                 //��ͨ���캯��   ����Ĭ�Ϲ��캯��ʱ�򣬲�Ҫ�ӣ���
	Person p2 = Person(10);    // �вι��캯��
	Person p3 = Person(p2);    //�������캯��

	//Person(10); //��������  �ص㣺��ǰִ���н�����ϵͳ������������������

	//3.��ʽת����
	Person p4 = 10;   //�൱�� д�� Person p4 = Person(10)��

}



int main()
{
	test();

	system("pause");
	return 0;
}