#pragma once
#include<condition_variable>
#include"Bank.h"
#include<mutex>
using namespace std;

class Father
{

public:
	Bank* bank=nullptr;
	Father()
	{
		bank = nullptr;
	}
	Father(Bank* bank) :bank(bank)
	{

	}
public:
	void FSaveM();
private:
	mutex m1;
};

