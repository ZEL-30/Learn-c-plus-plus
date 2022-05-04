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

	string        m_Name;        //选手姓名
	double        m_Score;       //选手平均分
};



void createplayer(vector<Player> &v)
{
	for (int i = 0; i < 5; i++)
	{
		double score = 0;
		string name;
		cout << "请输入第" << i + 1 << "个人的姓名：" << endl;
		cin >> name;
		Player p(name, score);
		v.push_back(p);
	}
}


void setscore(vector<Player> &v)
{
	for (vector<Player>::iterator it = v.begin(); it != v.end(); it++)
	{
		//创建deque容器存放分数
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
	//1、创建5名选手
	vector<Player> v;
	createplayer(v);

	//2、给5名选手打分
	setscore(v);


	//3、显示最后得分
	for (vector<Player>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << " 平均分：" << (*it).m_Score << endl;
	}


	system("pause");
	return 0;
}