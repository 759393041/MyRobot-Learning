#include "Bank.h"
void Bank::SaveMoney(string name, int number)
{

	money += number;
	cout << name << " 存了 " << number << " 共计 " << money << endl;

}
void Bank::DrawMoney(string name, int number)
{
	
	money -= number;
	cout << name << " 取了 " << number << " 共计 " << money << endl;

}