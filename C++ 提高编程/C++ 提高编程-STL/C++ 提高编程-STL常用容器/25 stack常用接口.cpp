#include <iostream>
#include <stack>
using namespace std;


//stack<T> stk;                             //stack����ģ����ʵ�֣�stack�����Ĭ�Ϲ�����ʽ
//stack(const stack& stk);                  //�������캯��
//
//stack& operator=(const stack& stk);       //���صȺŲ�����
//
//push(elem);                               //��ջ������Ԫ��
//pop();                                    //��ջ���Ƴ���һ��Ԫ��
//top();                                    //����ջ��Ԫ��
//
//empty();                                  //�ж�ջ���Ƿ�Ϊ��
//size();                                   //����ջ��С




void test01()
{
	//�ص㣺�����Ƚ�������ݽṹ
	stack<int> s;

	//��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	while(!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}

}



int main()
{
	test01();

	system("pause");
	return 0;
}