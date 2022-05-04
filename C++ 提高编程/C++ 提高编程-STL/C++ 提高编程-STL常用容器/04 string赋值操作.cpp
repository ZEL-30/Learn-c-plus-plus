#include <iostream>
#include <string>
using namespace std;


//string& operator=(const char* s);            //char*�����ַ��� ��ֵ����ǰ���ַ���
//string& operator=(const string &s);          //���ַ���s��ֵ����ǰ���ַ���
//string& operator=(char s);                   //�ַ���ֵ����ǰ���ַ���
//string& assign(const char* s);               //���ַ���s������ǰ���ַ���
//string& assign(const char* s,int n);         //���ַ���s��ǰn���ַ���ֵ����ǰ���ַ���
//string& assign(const string &s);             //���ַ���s��ֵ����ǰ�ַ���
//string& assign(int n,char c);                //��n���ַ�c��ֵ����ǰ�ַ���


void test01()
{
	string s1;
	const char* str1 = "�Ŷ���";
	s1 = str1;
	cout << "s1 = " << s1 << endl;

	string s2;
	s2 = s1;
	cout << "s2 = " << s2 << endl;

	string s3;
	s3 = 'z';
	cout << "s3 = " << s3 << endl;

	string s4;
	s4.assign("������");
	cout << "s4 = " << s4 << endl;

	string s5;
	s5.assign("�л����񹲺͹�", 8);
	cout << "s5 = " << s5 << endl;

	string s6;
	s6.assign(s5);
	cout << "s6 = " << s6 << endl;

	string s7;
	s7.assign(10, 'z');
	cout << "s7 = " << s7 << endl;


}


int main()
{
	test01();

	system("pause");
	return 0;
}