#include<iostream>
#include<thread>
#include"introduce.h"
#include<functional>
using namespace std;

void test(introduce* aa)
{
	aa->stu_introduce();
}

int main()	
{
	introduce *ty = new introduce();
	//thread t1(test,ty);
	//thread t1(&introduce::stu_introduce, ty);


	auto i=bind(&introduce::stu_introduce, ty);
	thread t1(i);

	t1.join();

	return 0;
}
