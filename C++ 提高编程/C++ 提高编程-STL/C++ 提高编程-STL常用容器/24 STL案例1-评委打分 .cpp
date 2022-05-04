#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;


class Player
{
public:
	Player(string Name, double Score)
	{
		m_Name = Name;
		m_Score = Score;
	}

	string        m_Name;        //ѡ������
	double        m_Score;       //ѡ��ƽ����
};



void createplayer(vector<Player> &v)
{
	for (int i = 0; i < 5; i++)
	{
		double score = 0;
		string name;
		cout << "�������" << i + 1 << "���˵�������" << endl;
		cin >> name;
		Player p(name, score);
		v.push_back(p);
	}
}


void setscore(vector<Player> &v)
{
	for (vector<Player>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����deque������ŷ���
		deque<int> d;
		
		for (int i = 0; i < 10; i++)
		{
			
			int score = rand() % 41 + 60; // 60~100
			d.push_back(score);
		}
		//sort(d.begin(), d.end());
		double f_score = 0;
		for (int i = 1; i < 9; i++)
		{
			f_score = f_score + d[i];
		}
		double average = f_score / 8;
		(*it).m_Score = average;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	//1������5��ѡ��
	vector<Player> v;
	createplayer(v);

	//2����5��ѡ�ִ��
	setscore(v);


	//3����ʾ���÷�
	for (vector<Player>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << (*it).m_Name << " ƽ���֣�" << (*it).m_Score << endl;
	}


	system("pause");
	return 0;
}