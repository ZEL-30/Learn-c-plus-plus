#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person
{
public:
	Person(string name,int age)
	{
		m_name = name;
		m_age = age;
	}

	string m_name;
	int m_age;
};


ostream& operator<<(ostream& cout, Person& p)
{
	cout << "������" << p.m_name << " ���䣺" << p.m_age;
	return cout;
}


//����Զ�����������
void test01()
{
	vector<Person> v;
	Person p1("�Ŷ���",23);
	Person p2("������",22);
	Person p3("������",20);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);

	//���������е�����
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

}

//����Զ����������͵�ָ��
void test02()
{
	vector<Person*> v;
	Person p1("�Ŷ���", 23);
	Person p2("������", 22);
	Person p3("������", 20);
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)    //����   (*it) == <��������>
	{
		cout << (*it)->m_age << endl;
		cout << **it << endl;
	}
}


int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person
{
public:
	Person(string name,int age)
	{
		m_name = name;
		m_age = age;
	}

	string m_name;
	int m_age;
};


ostream& operator<<(ostream& cout, Person& p)
{
	cout << "������" << p.m_name << " ���䣺" << p.m_age;
	return cout;
}


//����Զ�����������
void test01()
{
	vector<Person> v;
	Person p1("�Ŷ���",23);
	Person p2("������",22);
	Person p3("������",20);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);

	//���������е�����
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

}

//����Զ����������͵�ָ��
void test02()
{
	vector<Person*> v;
	Person p1("�Ŷ���", 23);
	Person p2("������", 22);
	Person p3("������", 20);
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)    //����   (*it) == <��������>
	{
		cout << (*it)->m_age << endl;
		cout << **it << endl;
	}
}


int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}