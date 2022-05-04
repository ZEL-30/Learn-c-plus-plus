#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//set_intersection           //�����������Ľ���
//set_union                  //�����������Ĳ���
//set_difference             //�����������Ĳ


class Myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};







void test01()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}


	vector<int> vTargert;
	vTargert.resize(v1.size()+v2.size());
	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTargert.begin());
	cout << "������" << endl;
	for_each(vTargert.begin(), itEnd, Myprint());
	cout << endl;
}


int main()
{
	test01();
	system("pause");
	return 0;
}