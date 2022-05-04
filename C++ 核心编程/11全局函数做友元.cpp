#include <iostream>
using namespace std;


class Building
{
	//goodgayȫ�ֺ�����Building�����ѣ����Է���Building��˽�г�Ա
	friend void goodgay(Building* building);  
public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}




public:

	string m_SittingRoom;   //����
private:
	string m_BedRoom;       //����

};




void goodgay(Building* building)
{
	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
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