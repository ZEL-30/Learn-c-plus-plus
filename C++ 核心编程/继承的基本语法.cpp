//#include <iostream>
//using namespace std;
//
////继承实现页面
//
//
////公共页面
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++、...(公共分类列表)" << endl;
//	}
//};
//
//
////Java页面
//class Java : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java学习视频" << endl;
//	}
//};
//
////Python页面
//class Python : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学习视频" << endl;
//	}
//};
//
////C++页面
//class CPP : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "CPP学习视频" << endl;
//	}
//};
//
//
//
//int main()
//{
//	Python python;
//	python.header();
//	python.footer();
//	python.content();
//	python.left();
//
//	system("pause");
//	return 0;
//}