//����һ ֱ�Ӱ���Դ�ļ�
//#include "Person.cpp" 

//������ �� .h ��.cpp�е�����д��һ�𣬺�׺��Ϊ.hpp

#include "Person.hpp"

void test01()
{
	Person<string, int>p1("�Ŷ���", 23);
	p1.showPerson();
}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}