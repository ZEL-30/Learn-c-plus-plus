#include <iostream>
#include <string>
using namespace std;


//string& insert(int pos, const char* s);               //�����ַ���
//string& insert(int pos, const string &str);           //�����ַ���
//string& insert(int pos, int n,char c);                //��ָ��λ�ò���n���ַ�c
//string& erase(int pos, int n = npos);                 //ɾ����Pos��ʼ��n���ַ�


void test01()
{
	string str1 = "�Ŷ���";
	str1.insert(2, "����");
	cout << "str1 = " << str1 << endl;
	str1.erase(2, 4);
	cout << "str1 = " << str1 << endl;
}





int main()
{
	test01();

	system("pause");
	return 0;
}