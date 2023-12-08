#pragma once
#include<iostream>
using namespace std;

class Test_template
{
public:
	template<typename T1, typename T2>
	static T1 test(T1 t1, T2 t2);

};

