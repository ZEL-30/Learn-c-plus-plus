#include <iostream>
#include <list>
using namespace std;


//reverse();        //��ת����
//sort();           //��������


void printList(list<int>& L)
{
	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


bool mycompare(int v1, int v2)
{
	//����  ���õ�һ���� > �ڶ�����
	return v1 > v2;
}





void test01()
{
	list<int> L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);

	printList(L);
	L.reverse();
	printList(L);
	L.sort();  //Ĭ������
	printList(L);

	//����
	L.sort(mycompare);
	printList(L);
}





int main()
{
	test01();

	system("pause");
	return 0;
}