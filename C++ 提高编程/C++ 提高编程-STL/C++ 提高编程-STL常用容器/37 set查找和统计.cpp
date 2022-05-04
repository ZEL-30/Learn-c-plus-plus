#include <iostream>
#include <set>
using namespace std;

//find(key);                            //����key�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end()
//count(key);                           //ͳ��key��Ԫ�ظ���



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
	
	set<int>::iterator pos = s1.find(40);
	if (pos != s1.end())
	{
		cout << "�ҵ�Ԫ��:" << *pos << endl;
	}
	else
	{
		cout << "û���ҵ�Ԫ��" << endl;
	}
}

void test02()
{
	//ͳ��
	multiset<int> s1;

	//�������ݣ�ֻ��insert��ʽ
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(30);
	s1.insert(20);

	cout << "num = " << s1.count(30) << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}

