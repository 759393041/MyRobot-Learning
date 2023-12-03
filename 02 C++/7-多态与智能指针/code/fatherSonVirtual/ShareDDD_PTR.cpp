#include "ShareDDD_PTR.h"
#include<iostream>
#include<memory>
using namespace std;
int main()
{
	shared_ptr<int>sp0(new int(97));
	shared_ptr<int>sp1(sp0);
	shared_ptr<char>::element_type arr = *sp0;//char类型显示int 没有绑定sp 只是一个element的类对象
	//arr 是char arr 局部变量
	shared_ptr<int[]>sp2(new int[11]);
	sp2[0] = 0;

	
	cout << sp1.use_count() << endl;
	cout << arr << endl;
	sp1.reset();
	cout << sp0.use_count() << endl;
	sp0.reset();
	cout << sp0.use_count() << endl; // 会执行对应类的析构函数


}