#include "lambda_learn.h"
#include<iostream>
#include<string>

using namespace std;

int main()
{
	auto d =[](int a, int b)->int{return a + b;};
	//auto f = [](int a, int b)//������������ƶϳ����ͣ���ô[]�����->intҲ��ʡ��
	//{
	//	return a + b;
	//};
	int r = 12;
	int f = [](int a, int b)->int {return a + b;}(3,4);//����д��Ҫ����ֵ
	auto stringP = [](string a, string b) {return a + b; };
	string rr= [](string a, string b) {return a + b; }("hello","world");
	auto f2 = [&r] {r = 15; };
	f2();
	cout << r << endl;
	std::cout << rr << endl;
	int f = [&]{return r; }();//���Կ�����ֵ�Ǹ������ġ�
	//std::cout << d(3, 4) << endl;
	//std::system("pause");
}