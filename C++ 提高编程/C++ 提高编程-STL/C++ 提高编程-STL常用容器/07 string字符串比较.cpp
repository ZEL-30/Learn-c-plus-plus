#include <iostream>
using namespace std;

//= ���� 0
//> ���� 1
//< ���� -1
//int campare(const string& s) const;       //���ַ���s�Ƚ�
//int compare(const char* s) const;         //���ַ���s�Ƚ�

void test01()
{
	string str1 = "xello";
	string str2 = "hello";
	if (str1.compare(str2) == 0)
	{
		cout << "�ַ������" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1 > str2" << endl;
	}
	else if (str1.compare(str2) < 0)
	{
		cout << "str1 < str2" << endl;
	}
}



int main()
{
	test01();

	system("pause");
	return 0;
}