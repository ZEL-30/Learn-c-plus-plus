#include <iostream>
#include <string>
using namespace std;


//int find(const string& str, int pos = 0) const;          //����str��һ�γ���λ�ã���pos��ʼ����
//int find(const char* s, int pos = 0) const;              //����s��һ�γ���λ�ã���pos��ʼ����
//int find(const char* s, int pos,int n) const;            //��posλ�ò���s��ǰn���ַ���һ��λ�� 
//int find(const char c, int pos = 0) const;               //�����ַ�c��һ�γ���λ��
//int rfind(const string& str, int pos = npos) const;      //����str���һ�γ���λ�ã���pos��ʼ����
//int rfind(const char* s, int pos = npos) const;          //����s���һ�γ���λ�ã���pos��ʼ����
//int rfind(const char* s, int pos,int n) const;           //��pos����s��ǰn���ַ����һ��λ��
//int rfind(const char c, int pos = 0) const;              //�����ַ�c���һ�γ���λ��
//string& replace(int pos, int n, const string& str);      //�滻��pos��ʼ��n���ַ�Ϊ�ַ���str
//string& replace(int pos, int n, const char* s);          //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s


//1������
void test01()
{
	string str1 = "abcdefg";
	int pos = str1.find("de");
	cout << "pos = " << pos << endl;      //3 ��0��ʼ����  û�з���-1

	//rfind
	pos = str1.find("de");
	cout << "pos = " << pos << endl;
}

//2���滻
void test02()
{
	string str1 = "abcdefg";
	//��1��λ����3���ַ��滻Ϊ1111
	str1.replace(1, 3, "1111");
	cout << str1 << endl;    //a1111efg
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}