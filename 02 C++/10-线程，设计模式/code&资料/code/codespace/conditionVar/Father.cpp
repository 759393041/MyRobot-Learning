#include "Father.h"
#include"Son.h"


void Father::FSaveM()
{
	while (true)
	{

		bank->SaveMoney("����", 100);
		Sleep(100);

	}

}
void Son::SDrawMoney()
{
	while (true)
	{

		if (this->bank->money > 200)
		{
			this->bank->DrawMoney("����", 200);
		}

		Sleep(100);
	}

}