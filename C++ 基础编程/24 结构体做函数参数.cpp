#include <iostream>
#include <string>
using namespace std;

struct Student
{
	string       name;
	int          age;
	string       sex;
	long long    s_id;
	string       courses;
	int          scores;
};

void PrintSturct(struct Student std)
{
	cout << "ѧ����������" << std.name << endl;
	cout << "ѧ�������䣺" << std.age << endl;
	cout << "ѧ�����Ա�" << std.sex << endl;
	cout << "ѧ����ѧ�ţ�" << std.s_id << endl;
	cout << "ѧ����ѧ�ƣ�" << std.courses << endl;
	cout << "ѧ���ĳɼ���" << std.scores << endl;
}

//��ʼ��
Student* Init(Student* std)
{
	std->name = " ";
	std->age = 0;
	std->sex =" ";
	std->s_id = 0;
	std->courses = " ";
	std->scores = 0;
	return std;
}

int main()
{
	// �ṹ�帳ֵ����1
	Student std1;
	std1.name = "�Ŷ���";
	std1.age = 23;
	std1.sex = "��";
	std1.s_id = 201802464052;
	std1.courses  = "CET-6";
	std1.scores = 452;

	// �ṹ�帳ֵ����2
	Student std2 = { "������",22,"��",201802464060,"CET-6",0 };

	PrintSturct(std1);
	PrintSturct(std2);

	Init(&std2);   //��ʼ������
	PrintSturct(std1);
	PrintSturct(std2);

	system("pause");


	return 0;
} 