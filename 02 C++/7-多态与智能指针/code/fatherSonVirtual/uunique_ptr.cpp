#include "uunique_ptr.h"
#include<iostream>
#include<memory>
using namespace std;
int main()
{
	unique_ptr<int>up(new int(1));
	//unique_ptr<int>up1(up);uniquePTR����������ָ��ָ��ͬһ���ռ�
	cout << *up << endl;
	//��������move������ָ���ƶ����ÿռ䣬�ƶ���ԭָ�뽻���ÿռ䲢��Ϊnullptr
	unique_ptr<int>up2 = move(up);
	cout << *up2 << endl;
	cout << up << endl;
	up2.reset(new int(1));//�ͷ��ڴ�
	cout << up2 << endl;
	up.reset(new int(10));
	cout << *up << endl;
	int *up3 = up.get();
	*up3 = 12;
	cout << *up3 << endl;
	cout << *up << endl;
	up.reset(new int[5]);

	int arr[5] = { 0,1,2,3,4 };
	//��uniqueptr��������
	unique_ptr <uunique_ptr[]>upsz(new uunique_ptr[10]);
	upsz[0].a = 10;
	//����ķ�ʽ
	unique_ptr <int[]>uparr(new int[3]{1,2,3});
	uparr[0] = 10;


	return 0;
}