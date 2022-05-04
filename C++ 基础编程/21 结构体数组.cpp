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
	Student std_arr[] = { {"�Ŷ���",23,"��",201802464052,"CET-6",452},{"������",22,"��",201802464060,"CET-6",0} };

	cout << "������" << std_arr[0].name << " �ɼ���" << std_arr[0].scores << endl;
	cout << "������" << std_arr[1].name << " �ɼ���" << std_arr[1].scores << endl;
	
	
	system("pause");

	return 0;
} 