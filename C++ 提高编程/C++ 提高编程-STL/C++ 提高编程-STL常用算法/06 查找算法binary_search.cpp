#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//binary_search(iterator beg, iterator end,value);
////����ָ����Ԫ�أ��鵽 ����true ,����flase  
////beg ��ʼ������
////end ��ʼ������
////value ���ҵ�Ԫ��



void test01()
{
	vector<int> V;
	for (int i = 0; i < 10; i++)
	{
		V.push_back(i);
	}

	bool ret = binary_search(V.begin(), V.end(), 9);  //��������������

	if (ret)
	{
		cout << "�ҵ���" << endl;
	}
}



int main()
{
	test01();
	system("pause");
	return 0;
}