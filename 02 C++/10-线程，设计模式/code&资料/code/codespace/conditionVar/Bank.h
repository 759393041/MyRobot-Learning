#pragma once
#include<iostream>
#include<string>
#include<Windows.h>
#include<mutex>
using namespace std;
class Bank
{
public:
	int money=0;
	Bank():money(0)
	{

	}
	Bank(int money) :money(money)
	{

	}
public:
	void SaveMoney(string name, int number);
	void DrawMoney(string name, int number);
	
};

