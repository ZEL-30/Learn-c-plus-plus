#include <iostream>
#include <queue>
using namespace std;


//queue<T> que;                             //queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
//queue(const queue& que;                   //�������캯��
//
//queue& operator=(const queue& que);       //���صȺŲ�����
//
//push(elem);                               //���β����Ԫ��
//pop();                                    //�Ӷ�ͷ�Ƴ���һ��Ԫ��
//back();                                   //�������һ��Ԫ��
//front();                                    //���ص�һ��Ԫ��
//
//empty();                                  //�ж϶����Ƿ�Ϊ��
//size();                                   //���ض��д�С


void test01()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);

	while (!q.empty())
	{
		cout << "��ͷ��" << q.front() << " ��β��"<< q.back() <<endl;
		q.pop();
	}

}





int main()
{
	test01();

	system("pause");
	return 0;
}