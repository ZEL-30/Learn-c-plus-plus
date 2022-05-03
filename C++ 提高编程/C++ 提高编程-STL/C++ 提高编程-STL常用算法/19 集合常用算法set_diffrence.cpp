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
	vTargert.resize(max(v1.size(),v2.size()));
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTargert.begin());
	cout << "v1��v2���" << endl;
	for_each(vTargert.begin(), itEnd, Myprint());
	cout << endl;

	vector<int>::iterator itsEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTargert.begin());
	cout << "v2��v1���" << endl;
	for_each(vTargert.begin(), itsEnd, Myprint());
	cout << endl;
}


int main()
{
	test01();
	system("pause");
	return 0;
}