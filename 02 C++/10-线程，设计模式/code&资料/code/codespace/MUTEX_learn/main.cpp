#include<iostream>
#include<mutex>
#include<thread>
#include<Windows.h>
using namespace std;
mutex m;
void sayHI_1()
{
	for (int i = 0; i < 10; i++)
	{

		m.lock();
		cout << "i am the frist say" <<"  " << i<< endl;
		m.unlock();
		Sleep(10);
	}
}
void sayHI_2()
{

	for (int i = 0; i < 10; i++)
	{

		m.lock();
		cout << "i am the second say  " << i<< endl;
		m.unlock();
		Sleep(10);
	}
}


int main()
{
	thread t1(sayHI_1);
	thread t2(sayHI_2);

	

	t1.join();
	t2.join();


	return 0;
}