#include<iostream>
#include<iterator>
#include<vector>
#include<functional>
#include"static_test.h"
using namespace std;

void test()
{
	vector<int> rr = { 10,20,30,40,50,60 };
	vector<int>::iterator ite = rr.begin();

	while (ite != rr.end())
	{
		if (*ite < 60)
		{
			ite = rr.erase(ite);
		}
		else
		{
			ite++;
		}
	}
}

int main()
{
	function<void()> test_str = test;
	test_str();
	function <int(int, int)>f2 = [](int a, int b) {return a + b; };

	cout << f2(3, 4) << endl;

	static_test aa; 
	cout << aa.mul(3, 2) << endl; 
	
	//无论如何一定要加上&
//普通函数的手段一定要用对象 静态可以不用

	function<int(int,int)> crar1 = &static_test::mul;
	cout << crar1(5, 6) << endl;

	function<int(static_test,int, int)> crar2 = &static_test::add;
	cout << crar2(aa,7, 8) << endl;
}