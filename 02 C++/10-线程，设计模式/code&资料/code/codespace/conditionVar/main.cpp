#include"Bank.h"
#include"Father.h"
#include"Son.h"
#include<mutex>
#include<functional>


//ȫ�ֵ�λ�ö�������������mutex����
int main()
{
	Bank* bank = new Bank();
	
	Father fa(bank);
	Son so(bank);
	auto fatherThread = bind(&Father::FSaveM, fa);
	auto sonThread = bind(&Son::SDrawMoney, so);
	thread t1(fatherThread);
	thread t2(sonThread);


	t1.join();
	t2.join();

}
