#include<iostream>
#include"A.h"
#include"B.h"
using namespace std;

int main()
{
	B b;
	A a;
	b.a1 = new A();
	a.b1 = new B();
	b.a1->show();
	a.b1->show();

	return 0;
}