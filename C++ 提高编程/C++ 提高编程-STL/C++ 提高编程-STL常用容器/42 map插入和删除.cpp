#include <iostream>
#include <map>
using namespace std;


//insert(elem);                            //在容器中插入元素
//erase(pos);                              //删除pos位置的数据，返回下一个数据的位置
//erase(beg, end);                         //删除[beg，end)区间的数据，返回下一个数据的位置
//clear();                                 //删除容器中所有元素
//erase(key);                             //删除容器中值为key的元素










void printMap(map<int, int>& M)
{
	for (map<int, int>::iterator it = M.begin(); it != M.end(); it++)
	{
		cout << "编号：" << (*it).first << " 值：" << it->second << endl;
	}
}


void test01()
{
	map<int, int> M;

	//第一种
	pair<int, int> p1 = make_pair(1, 20);
	pair<int, int> p2 = make_pair(2, 100);
	pair<int, int> p3 = make_pair(3, 390);
	M.insert(p1);
	M.insert(p2);
	M.insert(p3);

	//第二种
	M.insert(make_pair(4, 150));

	//第三种
	M[5] = 50;

	printMap(M);

	//删除
	M.erase(M.begin());
	printMap(M);

	//按照key的值删除
	M.erase(3);
	printMap(M);

	//清空
	M.clear();
	 
}




int main()
{
	test01();

	system("pause");
	return 0;
}