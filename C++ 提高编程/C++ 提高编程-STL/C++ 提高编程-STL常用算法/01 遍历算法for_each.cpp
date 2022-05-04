#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//1����ͨ����
void print(int val)
{
	cout << val << " ";
}


//2���º���
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
	vector<int> V;
	for (int i = 0; i < 10; i++)
	{
		V.push_back(i);
	}

	//��������
	//����һ����ͨ����
	//for_each(V.begin(),V.end(),print);
	//cout << endl;

	//����������������-�º���
	Myprint p;
	for_each(V.begin(), V.end(), p);
	cout << endl;

}





int main()
{
	test01();

	system("pause");
	return 0;
}