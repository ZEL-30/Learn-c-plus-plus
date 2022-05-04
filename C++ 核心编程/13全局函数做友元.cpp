#include <iostream>
using namespace std;


class Building
{
	//goodgay全局函数是Building好朋友，可以访问Building中私有成员
	friend void goodgay(Building* building);  
public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}




public:

	string m_SittingRoom;   //客厅
private:
	string m_BedRoom;       //卧室

};




void goodgay(Building* building)
{
	cout << "好基友全局函数 正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友全局函数 正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
	Building b1;
	goodgay(&b1);
}






int main()
{	
	test01();

	system("pause");
	return 0;
}