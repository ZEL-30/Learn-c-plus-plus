#include <iostream>
#include <ctime>  //time系统时间头文件包含
using namespace std;


int main()
{
	//添加随机数种子
	srand((unsigned int)time(NULL));
	// rand()%100 是0-99之间的随机数
	int random_number = rand() % 100 + 1;
	int guess_number = 0;
	int time = 0;
	while (guess_number != random_number)
	{
		if (time <= 2)
		{
			cout << "请输入1-100之间的数字：" << endl;
			cin >> guess_number;
			time++;
			if (guess_number > random_number)
				cout << "抱歉你猜大了,你还有" << 3-time <<"次机会"<< endl;
			else if (guess_number < random_number)
				cout << "抱歉你猜小了,你还有" << 3-time << "次机会" << endl;
			else
				break;
		}
		else
			break;
		
	}
	if (time <= 2)
		cout << "恭喜你才对了，答案是：" << random_number << endl;
	else
		cout << "很遗憾！只有三次机会，下次加油吧！\n 答案是：" << random_number<< endl;



	system("pause");

	return 0;
}
