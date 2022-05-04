#include <iostream>
#include <list>
using namespace std;


//list<T> lst;                         //list����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//list(v.begin(), v.end());            //��v[begin(),end())�����е�Ԫ�ؿ���������  ǰ�պ󿪵�����
//list(n, elem);                       //���캯����n��elem����������
//list(const list& lst);               //�������캯��


void printList(const list<int> &L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}








void test01()
{
	list<int> L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1);

	list<int> L2(L1.begin(), L1.end());
	printList(L2);

	list<int> L3(10, 122);
	printList(L3);

	list<int> L4(L3);
	printList(L4);
}






int main()
{
	test01();

	system("pause");
	return 0;
}