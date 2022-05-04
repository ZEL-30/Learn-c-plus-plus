#include <iostream>
#include <list>
using namespace std;


//empty();                  //�ж������Ƿ�Ϊ��  ����bool��
//size();                   //����������Ԫ�صĸ���
//resize(int num);          //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ������λ��
//						  //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//resize(int num, elem);    //����ָ�������ĳ���Ϊnum���������䳤������elemֵ������λ��
//						  //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��





void printList(const list<int>& L)
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
	for (int i = 0; i < 10; i++)
	{
		L1.push_front(i);
	}
	printList(L1);

	cout << "L1�Ĵ�СΪ��" << L1.size() << endl;
	L1.resize(20, 10);
	printList(L1);
	cout << "L1�Ĵ�СΪ��" << L1.size() << endl;
}




int main()
{
	test01();

	system("pause");
	return 0;
}