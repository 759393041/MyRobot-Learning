#include<iostream>
#include<future>
#include<thread>
using namespace std;

int ADDint(int a,int b)
{
	cout<<"��ǰ�߳�IDΪ:		" << this_thread::get_id() << endl;
	return a + b;
}




int main()
{
	cout << "��ǰ�߳�IDΪ:	 " << this_thread::get_id() << endl;
	future<int>f =async(launch::deferred,ADDint, 1, 2);
	int a = f.get();
	cout << "������Ϊ" << a << endl;

}