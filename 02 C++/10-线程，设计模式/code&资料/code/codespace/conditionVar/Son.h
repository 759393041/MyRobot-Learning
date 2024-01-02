#pragma once
#include"Father.h"
#include"Bank.h"
class Son
{

public:
	Bank* bank = nullptr;
	Son(Bank* bank) :bank(bank)
	{

	}
public:
	void SDrawMoney();

};

