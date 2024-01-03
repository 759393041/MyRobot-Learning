#include<iostream>
#include"hungry.h"
using namespace std;

int main()
{
	hungry* stu1 = hungry::hy->getInstance();
	hungry* stu2 = hungry::hy->getInstance();
	cout << stu1 << endl;
	cout << stu2 << endl;



}