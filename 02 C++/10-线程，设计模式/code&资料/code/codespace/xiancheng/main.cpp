#include<iostream>
#include<thread>
#include"introduce.h"
#include<functional>
using namespace std;

void test()
{
	cout << this_thread::get_id() << endl;
	this_thread::sleep_for(chrono::seconds(2));
}

int main()	
{
	cout << this_thread::get_id() << endl;
	introduce *ty = new introduce();
	//thread t1(test,ty);
	//thread t1(&introduce::stu_introduce, ty);

	auto i=bind(&introduce::stu_introduce, ty);
	thread t1(i);

	while (1)
	{
		cout << "i am main" << endl;
		Sleep(3000);
	}


	t1.detach();

	return 0;
}
