#include <iostream>
#include <string>
using namespace std;

//���������������

class Student
{
	friend ostream& operator<< (ostream& cout, Student& s);
public:
	Student
private:
	//���ó�Ա�������� ���������
	//�޷����ó�Ա��������



	string m_name;
	int    m_age;
	string m_id;
};

Student::Student():m_name("�Ŷ���"),m_id("201802464052"),m_age(23)
{

}


ostream& operator<< (ostream &cout ,Student &s)  //���� operator<<(cout,p) �� cout << p
{
	cout << "����Ϊ��" << s.m_name << endl << "����Ϊ��" << s.m_age << endl << "ѧ��Ϊ��" << s.m_id << endl;
	return cout;
}





void test01()
{
	Student s1;

	//operator<<(cout,s1);   // ��������������ı���
	cout << s1 << endl;    //��
}



int main()
{
	test01();

	system("pause");
	return 0;
}