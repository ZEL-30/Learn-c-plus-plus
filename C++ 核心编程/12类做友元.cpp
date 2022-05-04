#include <iostream>
using namespace std;


class Building
{
	//GoodGay���Ǳ���ĺ����ѣ����Է��ʱ�����˽�г�Ա
	friend class GoodGay;   //���൱������˵��
public:
	Building();
	string m_SittingRoom;   //����
private:
	string m_BedRoom;       //����

};

//����д��Ա����
Building::Building()   //Building�Ĺ��캯��
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

class GoodGay
{
public:
	GoodGay();
	void visit();
	Building* building;
};

GoodGay::GoodGay()
{
	//����һ��������Ķ���
	building = new Building;
}


void GoodGay::visit()  //�ιۺ��� ����Building�е�����
{
	cout << "�û��������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;
}


void test01()
{
	GoodGay  g;
	g.visit();

}









int main()
{
	test01();

	system("pause");
	return 0;
}