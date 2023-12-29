#pragma once
#include<iostream>
#include"Box.h"
#include<queue>
using namespace std;

class workstation
{
public:
	queue<Box> box_amount;
	workstation()
	{
		for (int i = 9; i >0; i--)
		{
			Box thebox(i);
			box_amount.push(thebox);
		}
	}
};

