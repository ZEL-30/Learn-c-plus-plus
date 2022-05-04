#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//find                    //����Ԫ��
//find_if                 //����������Ԫ��
//adjacant_find           //���������ظ�Ԫ��
//binary_seach            //���ֲ��ҷ�
//count                   //ͳ��Ԫ�ظ���
//count_if                //������ͳ��Ԫ�ظ���
//
//find (iterator beg, iterator end, value);
////��ֵ����Ԫ�أ��ҵ�����ָ��Ԫ�صĵ��������Ҳ������ؽ���������end()
////beg��ʼ������
////end����������
////value ���ҵ�Ԫ��


class Person
{
public:
	Person(string Name,int Age)
	{
		m_Name = Name;
		m_Age = Age;
	}

	//���� == �õײ�find֪����ζԱ�Person��������
	bool operator==(const Person &p)
	{
		if (m_Age == p.m_Age && m_Name == p.m_Name)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string m_Name;
	int m_Age;
};




//������������
void test01()
{
	vector<int> V;
	for (int i = 0; i < 10; i++)
	{
		V.push_back(i);
	}

	vector<int>::iterator it = find(V.begin(), V.end(), 5);
	if ( it != V.end())
	{
		cout << "�ҵ������ݣ�" << *it <<  endl;
	}
	else
	{
		cout << "û���ҵ�" << endl;
	}
}


//�Զ�����������
void test02()
{
	vector<Person> V;
	string NameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10 ; i++)
	{
		string Name = "ѡ��";
		Name += NameSeed[i];
		int Age = i;
		Person p(Name, Age);
		V.push_back(p);
	}
	Person p1("ѡ��A", 2);
	vector<Person>::iterator it = find(V.begin(), V.end(),p1);

	if (it != V.end())
	{
		cout << "�ҵ���! ������" << it->m_Name << " ���䣺" << it->m_Age << endl;
	}
	else
	{
		cout << "û���ҵ�!" << endl;
	}

}


int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}