#include <set>
#include <iostream>
using namespace std;


//set<T> st;                                       //Ĭ�Ϲ��캯��
//set(const set& st);                              //�������캯��
//
//set& operator=(const set& st);                   //���صȺŲ�����



void printSet(set<int> S)
{
	for (set<int>::iterator it = S.begin(); it != S.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}


void test01()
{
	set<int> s1;

	//�������ݣ�ֻ��insert��ʽ
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(30);
	s1.insert(20);

	printSet(s1);

	set<int>s2(s1);
	printSet(s2);
}




int main()
{
	test01();

	system("pause");
	return 0;
}