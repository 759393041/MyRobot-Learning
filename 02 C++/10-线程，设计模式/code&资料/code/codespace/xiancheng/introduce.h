#pragma once
#include<string>
#include<iostream>
#include<windows.h>
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
			cout << "����:" << this->s_name << "		" << "����:" << this->s_age << endl;
			Sleep(1000);
		}
	}
public:
	introduce() :s_name("����"), s_age(26)
	{

	}
};

