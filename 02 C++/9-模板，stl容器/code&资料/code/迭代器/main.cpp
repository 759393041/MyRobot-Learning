#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

int main()
{
	vector<int> rr = {10,20,30,40,50,60};
	vector<int>::iterator ite = rr.begin();

	while (ite!=rr.end())
	{
		if (*ite<60)
		{
			ite=rr.erase(ite);
		}
		else
		{
			ite++;
		}
	}




}