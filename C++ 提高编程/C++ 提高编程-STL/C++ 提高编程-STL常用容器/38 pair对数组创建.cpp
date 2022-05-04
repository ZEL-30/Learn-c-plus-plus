#include <iostream>
using namespace std;

//pair�����鴴��
void test01()
{
	//��һ�ַ�ʽ
	pair<string, int>p{ "�Ŷ���",23 };
		
	cout << "������" << p.first << " ���䣺" << p.second << endl;


	//�ڶ��ַ�ʽ
	pair<string, int> p2 = make_pair("������",20);

	cout << "������" << p.first << " ���䣺" << p.second << endl;
}






int main()
{
	test01();

	system("pause");
	return 0;
}