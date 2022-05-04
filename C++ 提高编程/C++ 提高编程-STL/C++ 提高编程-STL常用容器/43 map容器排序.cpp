#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

class Mycompare
{
public:
	bool operator()(int v1, int v2) const 
	{
		return v1 > v2;
	}
};





void printMap(map<int, int,Mycompare>& M)
{
	for (map<int, int, Mycompare>::iterator it = M.begin(); it != M.end(); it++)
	{
		cout << "¼ü£º" << it->first << " Öµ£º" << it->second << endl;
	}
}





void test01()
{
	map<int, int,Mycompare> M;
	M.insert(make_pair(1, 10));
	M.insert(make_pair(2, 20));
	M.insert(make_pair(3, 30));
	M.insert(make_pair(4, 40));

	printMap(M);



}



int main()
{
	test01();

	system("pause");
	return 0;
}