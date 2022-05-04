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
	Student std1 = {"ÕÅ¶÷ÀÖ",23,"ÄĞ",201802464052,"CET-6",452};
	Student std2 = { "ÑîÎÄÁú",22,"ÄĞ",201802464060,"CET-6",0 };

	Student* p_std1 = &std1;
	p_std1->name = "³ÂÕÜ";

	cout << "ĞÕÃû£º" << p_std1->name << " ³É¼¨£º" << p_std1->scores << endl;



	system("pause");

	return 0;
}