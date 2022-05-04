#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class Myprint
{
public:
	void operator()(int val)
	{
		cout << val <<" ";
	}
};


void test01()
{
	vector<int> V;
	V.resize(10);
	fill(V.begin(), V.end(), 1000);
	for_each(V.begin(), V.end(), Myprint());
}


int main()
{
	test01();
	system("pause");
	return 0;
}