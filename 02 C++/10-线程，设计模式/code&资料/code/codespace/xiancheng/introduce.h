#pragma once
#include<string>
#include<iostream>
#include<windows.h>
#include<thread>

using namespace std;

class introduce
{
public:
	string s_name;
	int s_age;
public:
	void stu_introduce()
	{
		for (int i = 0; i < 10; i++)
		{
			cout <<"id:"<<this_thread::get_id()<< "ÐÕÃû:" << this->s_name << "		" << "ÄêÁä:" << this->s_age << endl;
			this_thread::sleep_for(chrono::seconds(1));
		}
	}
public:
	introduce() :s_name("ÌìÓî"), s_age(26)
	{

	}
};

