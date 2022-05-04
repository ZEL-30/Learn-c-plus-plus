#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;




//��ӡ
void print1(int val)
{
	cout << val << " ";
}


class Mycompare1
{
public:
	int operator()(int v1,int v2)
	{
		return v1 > v2;
	}
};




//������������
void test01()
{
	vector<int> V;
	V.push_back(90);
	V.push_back(60);
	V.push_back(70);
	V.push_back(30);
	V.push_back(10);
	V.push_back(60);

	cout << "ԭ������" << endl;
	for_each(V.begin(), V.end(), print1);
	cout << endl;

	sort(V.begin(), V.end()); //Ĭ��������
	cout << "-------------------------------------------" << endl;
	cout << "������" << endl;
	for_each(V.begin(), V.end(), print1);
	cout << endl;

	//sort(V.begin(), V.end(), Mycompare1());
	random_shuffle(V.begin(), V.end());
	cout << "-------------------------------------------" << endl;
	cout << "���Һ�" << endl;
	for_each(V.begin(), V.end(), print1);
	cout << endl;

}





int main()
{
	test01();

	system("pause");
	return 0;
}