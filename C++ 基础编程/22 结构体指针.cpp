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

int main()
{
	Student std1 = {"�Ŷ���",23,"��",201802464052,"CET-6",452};
	Student std2 = { "������",22,"��",201802464060,"CET-6",0 };

	Student* p_std1 = &std1;
	p_std1->name = "����";

	cout << "������" << p_std1->name << " �ɼ���" << p_std1->scores << endl;



	system("pause");

	return 0;
}