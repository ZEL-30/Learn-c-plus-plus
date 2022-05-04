#include <iostream>
#include <set>
using namespace std;



//empty();                  //�ж������Ƿ�Ϊ��  ����bool��
//size();                   //����������Ԫ�صĸ���
//swap(st);                 //����������������


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

	set<int> s2;
	s2.insert(100);
	s2.insert(200);
	s2.insert(300);
	s2.insert(400);
	s2.insert(500);

	cout << "����ǰ��" << endl;
	printSet(s1);
	printSet(s2);

	cout << "������" << endl;
	s1.swap(s2);
	printSet(s1);
	printSet(s2);
}



int main()
{
	test01();

	system("pause");
	return 0;
}

