#include <iostream>
#include <string>
using namespace std;


//char& operator[](int n);      //ͨ��[]�ķ�ʽ��ȡ�ַ�
//char& at(int n);              //ͨ��at�ķ�ʽ��ȡ�ַ�
 
void test01()
{
	string str = "hello";
	//cout << "str = " << str << endl;

	for (int i = 0; i < str.size(); i++)    //str.size()  �����ַ�������
	{
		cout << str[i] << endl;        //ͨ��[]�ķ�ʽ��ȡ�ַ�
		cout << str.at(i) << endl;     //ͨ��at�ķ�ʽ��ȡ�ַ�
	}

	//�޸ĵ����ַ�
	str[0] = 'x';
	cout << "str = " << str << endl;
	str.at(1) = 'x';
	cout << "str = " << str << endl;
}




int main()
{
	test01();

	system("pause");
	return 0;
}