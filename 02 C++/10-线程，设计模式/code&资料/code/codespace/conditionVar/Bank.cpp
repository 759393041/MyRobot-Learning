#include "Bank.h"
#include<condition_variable>
#include<mutex>
static condition_variable cv;
static condition_variable cv2;
extern mutex m;
void Bank::SaveMoney(string name, int number)
{
	unique_lock<mutex>ul1(m);
	money += number;
	cout << name << " ���� " << number << " ���� " << money << endl;
	if (money>200&&money<2000)
	{

		cv.notify_one();
	}



}
void Bank::DrawMoney(string name, int number)
{
	unique_lock<mutex>ul2(m);
	if (money < number)
	{
		cout << "����Ǯû�򹻣��ȴ���Ǯ" << endl;
		cv.wait(ul2);
	}
	if (money> number)
	{
		
		money -= number;
		cout << name << " ȡ�� " << number << " ���� " << money << endl;
	}

}