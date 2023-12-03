#include "uunique_ptr.h"
#include<iostream>
#include<memory>
using namespace std;
int main()
{
	unique_ptr<int>up(new int(1));
	//unique_ptr<int>up1(up);uniquePTR不允许其他指针指向同一个空间
	cout << *up << endl;
	//可以允许move操作令指针移动到该空间，移动后原指针交出该空间并变为nullptr
	unique_ptr<int>up2 = move(up);
	cout << *up2 << endl;
	cout << up << endl;
	up2.reset(new int(1));//释放内存
	cout << up2 << endl;
	up.reset(new int(10));
	cout << *up << endl;
	int *up3 = up.get();
	*up3 = 12;
	cout << *up3 << endl;
	cout << *up << endl;
	up.reset(new int[5]);

	int arr[5] = { 0,1,2,3,4 };
	//用uniqueptr访问数组
	unique_ptr <uunique_ptr[]>upsz(new uunique_ptr[10]);
	upsz[0].a = 10;
	//数组的方式
	unique_ptr <int[]>uparr(new int[3]{1,2,3});
	uparr[0] = 10;


	return 0;
}