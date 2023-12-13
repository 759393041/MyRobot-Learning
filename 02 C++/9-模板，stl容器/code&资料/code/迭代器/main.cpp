#include<iostream>
#include<iterator>
#include<vector>
#include<functional>
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





}