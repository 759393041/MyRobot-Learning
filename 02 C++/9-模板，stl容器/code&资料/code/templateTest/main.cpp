#include<iostream>
#include"testTemplateStatic.h"
#include"initialize_var.h"
using namespace std;


template<typename T1, typename T2>
T1 test(T1 t1, T2 t2)
{
	return t1 + t2;
}
int main()
{
	
	cout << test(1.1, 21.1) << endl;
	testTemplateStatic aa;
	cout << aa.add(1, 212) << endl;
	cout << testTemplateStatic::s_add(2.1, 3) << endl;
	initializer_list<int> number = { 1,3,4,5,6 };
	initialize_var a;
	a.addI(number);
}