#include <iostream>
#include <string>
using namespace std;


//string substr(int pos = 0, int n = npos) const;     //������pos��ʼ��n���ַ���ɵ��ַ���


void test01()
{
	string str1 = "I love you";
	string substr = str1.substr(2, 4);
	cout << "str1 = " << str1 << endl;
	cout << "substr = " << substr <<  endl;

	
}

//ʵ�ʲ���
void test02()
{
	string email = "1362848545@qq.com";
	string emails = "zhangenle@qq.com";
	string substr = emails.substr(0, emails.find("@"));
	cout << "����Ϊ�� " << emails << endl; 
	cout << "�û���Ϊ��" << substr << endl;
}


int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}