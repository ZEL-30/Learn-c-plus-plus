#include <iostream>
#include <set>
using namespace std;



//insert(elem);                            //�������в���Ԫ��
//erase(pos);                              //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
//erase(beg, end);                         //ɾ��[beg��end)��������ݣ�������һ�����ݵ�λ��
//clear();                                 //ɾ������������Ԫ��
//erase(elem);                             //ɾ��������������elemֵƥ���Ԫ��



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
	s1.erase(s1.begin());
	printSet(s1);
}



int main()
{
	test01();

	system("pause");
	return 0;
}

