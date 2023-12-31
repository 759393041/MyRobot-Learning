#include"Bank.h"
#include"Father.h"
#include"Son.h"
#include<mutex>
#include<functional>
mutex m;

//全局的位置定义条件变量和mutex变量
int main()
{
	Bank* bank = new Bank();
	//
	Father fa(bank);
	Son so(bank);
	auto fatherThread = bind(&Father::FSaveM, ref(fa));
	auto sonThread = bind(&Son::SDrawMoney, ref(so));
	thread t1(fatherThread);
	thread t2(sonThread);

	
	t1.join();
	t2.join();

}
