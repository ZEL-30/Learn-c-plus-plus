//#include <iostream>
//using namespace std;
//
//
//class Building
//{
//	//GoodGay类是本类的好朋友，可以访问本类中私有成员
//	friend class GoodGay;   //这相当于身份说明
//public:
//	Building();
//	string m_SittingRoom;   //客厅
//private:
//	string m_BedRoom;       //卧室
//
//};
//
////类外写成员函数
//Building::Building()   //Building的构造函数
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();
//	Building* building;
//};
//
//GoodGay::GoodGay()
//{
//	//创建一个建筑物的对象
//	building = new Building;
//}
//
//
//void GoodGay::visit()  //参观函数 访问Building中的属性
//{
//	cout << "好基友类正在访问：" << building->m_SittingRoom << endl;
//	cout << "好基友类正在访问：" << building->m_BedRoom << endl;
//}
//
//
//void test01()
//{
//	GoodGay  g;
//	g.visit();
//
//}
//
//
//
//
//
//
//
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}