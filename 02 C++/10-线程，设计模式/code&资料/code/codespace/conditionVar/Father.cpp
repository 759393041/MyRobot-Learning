#include "Father.h"
#include"Son.h"
#include<mutex>

void Father::FSaveM()
{
	while (true)
	{

		bank->SaveMoney("����", 100);
		Sleep(1000);

	}

}
