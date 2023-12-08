#pragma once
#include<initializer_list>
#include<iostream>

using namespace std;
class initialize_var
{
public:
	void addI(initializer_list<int> var)
	{
		int total = 0;
		for (int i : var)
		{
			std::cout << i << endl;
			total += i;
		}
		cout << total << endl;
	}
	
};

