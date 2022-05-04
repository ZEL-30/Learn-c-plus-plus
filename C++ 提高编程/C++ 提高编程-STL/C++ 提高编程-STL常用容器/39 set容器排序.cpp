#include <iostream>
#include <set>
using namespace std;


class Mycompare
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}


};



void printSet(set<int,Mycompare> &S)
{
	for (set<int,Mycompare>::iterator it = S.begin(); it != S.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}




void test01()
{

	//��Ҫ��û�в���ǰ������������ָ��
	set<int,Mycompare> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.insert(50);
	s1.insert(60);

	printSet(s1);
}





int main()
{
	test01();

	system("pause");
	return 0;
}