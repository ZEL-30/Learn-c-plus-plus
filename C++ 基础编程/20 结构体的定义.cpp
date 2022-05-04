#include <iostream>
#include <string>
using namespace std;

typedef struct Student
{
	string       name;
	int          age;
	string       sex;
	long long    s_id;
	string       courses;
	int          scores;
} Student;



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




	cout << "ѧ����������" << std1.name << endl;
	cout << "ѧ�������䣺" << std1.age << endl;
	cout << "ѧ�����Ա�" << std1.sex << endl;
	cout << "ѧ����ѧ�ţ�" << std1.s_id << endl;
	cout << "ѧ����ѧ�ƣ�" << std1.courses << endl;
	cout << "ѧ���ĳɼ���" << std1.scores << endl;

	cout << endl;
  
	cout << "ѧ����������" << std2.name << endl;
	cout << "ѧ�������䣺" << std2.age << endl;
	cout << "ѧ�����Ա�" << std2.sex << endl;
	cout << "ѧ����ѧ�ţ�" << std2.s_id << endl;
	cout << "ѧ����ѧ�ƣ�" << std2.courses << endl;
	cout << "ѧ���ĳɼ���" << std2.scores << endl;


	system("pause");


	return 0;
} 