#include <iostream>
#include <string>
using namespace std;


//char& operator[](int n);      //通过[]的方式获取字符
//char& at(int n);              //通过at的方式获取字符
 
void test01()
{
	string str = "hello";
	//cout << "str = " << str << endl;

	for (int i = 0; i < str.size(); i++)    //str.size()  计算字符串长度
	{
		cout << str[i] << endl;        //通过[]的方式获取字符
		cout << str.at(i) << endl;     //通过at的方式获取字符
	}

	//修改单个字符
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