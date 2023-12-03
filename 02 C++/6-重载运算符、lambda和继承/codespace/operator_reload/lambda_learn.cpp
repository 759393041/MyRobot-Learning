#include "lambda_learn.h"
#include<iostream>
#include<string>

using namespace std;

int main()
{
	auto d =[](int a, int b)->int{return a + b;};
	//auto f = [](int a, int b)//如果编译器能推断出类型，那么[]后面的->int也能省略
	//{
	//	return a + b;
	//};
	int r = 12;
	int f = [](int a, int b)->int {return a + b;}(3,4);//这种写发要赋初值
	auto stringP = [](string a, string b) {return a + b; };
	string rr= [](string a, string b) {return a + b; }("hello","world");
	auto f2 = [&r] {r = 15; };
	f2();
	cout << r << endl;
	std::cout << rr << endl;
	int f = [&]{return r; }();//可以看到初值是给参数的。
	//std::cout << d(3, 4) << endl;
	//std::system("pause");
}