#pragma once
#include<iostream>
#include"Box.h"
#include<queue>
#include"workstation.h"
#include<thread>
#include<mutex>



using namespace std;


class robot
{
public:

	void catch_LeftMove(workstation* ws);
	void catch_RightMove(workstation* ws);

};
