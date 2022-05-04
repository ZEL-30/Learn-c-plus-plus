#include <iostream>
#include <map>
using namespace std;


//insert(elem);                            //�������в���Ԫ��
//erase(pos);                              //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
//erase(beg, end);                         //ɾ��[beg��end)��������ݣ�������һ�����ݵ�λ��
//clear();                                 //ɾ������������Ԫ��
//erase(key);                             //ɾ��������ֵΪkey��Ԫ��










void printMap(map<int, int>& M)
{
	for (map<int, int>::iterator it = M.begin(); it != M.end(); it++)
	{
		cout << "��ţ�" << (*it).first << " ֵ��" << it->second << endl;
	}
}


void test01()
{
	map<int, int> M;

	//��һ��
	pair<int, int> p1 = make_pair(1, 20);
	pair<int, int> p2 = make_pair(2, 100);
	pair<int, int> p3 = make_pair(3, 390);
	M.insert(p1);
	M.insert(p2);
	M.insert(p3);

	//�ڶ���
	M.insert(make_pair(4, 150));

	//������
	M[5] = 50;

	printMap(M);

	//ɾ��
	M.erase(M.begin());
	printMap(M);

	//����key��ֵɾ��
	M.erase(3);
	printMap(M);

	//���
	M.clear();
	 
}




int main()
{
	test01();

	system("pause");
	return 0;
}