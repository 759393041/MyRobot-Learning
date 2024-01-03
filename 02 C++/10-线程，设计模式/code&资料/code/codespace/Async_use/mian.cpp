#include<iostream>
#include<future>
#include<thread>
using namespace std;

int ADDint(int a,int b)
{
	cout<<"当前线程ID为:		" << this_thread::get_id() << endl;
	return a + b;
}




int main()
{
	cout << "当前线程ID为:	 " << this_thread::get_id() << endl;
	future<int>f =async(launch::deferred,ADDint, 1, 2);
	int a = f.get();
	cout << "计算结果为" << a << endl;

}