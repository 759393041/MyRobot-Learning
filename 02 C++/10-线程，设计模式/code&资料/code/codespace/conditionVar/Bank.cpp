#include "Bank.h"
void Bank::SaveMoney(string name, int number)
{

	money += number;
	cout << name << " ���� " << number << " ���� " << money << endl;

}
void Bank::DrawMoney(string name, int number)
{
	
	money -= number;
	cout << name << " ȡ�� " << number << " ���� " << money << endl;

}