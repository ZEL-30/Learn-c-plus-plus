#include <iostream>
using namespace std;

//��ģ����̳�
template <class T>
class Base
{
public:
	T m;
};

class son :public Base<int>
{

};


//��������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
template <class T1,class T2>
class son2 : public Base<T2>
{
public:
	T1 obj;
};

void test01()
{
	son2<string,int> s2;
}
int main()
{
	system("pause");
	system("cls");
	return 0;
}