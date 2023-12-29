#include"Box.h"
#include"robot.h"
#include"workstation.h"
#include<thread>
#include<functional>
 
mutex m;
void robot::catch_LeftMove(workstation* ws)
{

	while (1)
	{
		if (ws->box_amount.empty())
		{
			return;
		}
		if (!ws->box_amount.empty())
		{
			m.lock();
			ws->box_amount.pop();
			cout << "LeftCatch<-:" << ws->box_amount.size() << endl;
			m.unlock();
			this_thread::sleep_for(chrono::seconds(1));

		}


	}


}
void robot::catch_RightMove(workstation* ws)
{

	while(1)
	{
		if (ws->box_amount.empty())
		{
			return;
		}
		if (!ws->box_amount.empty())
		{
			m.lock();
			ws->box_amount.pop();
			cout << "RightCatch:->" << ws->box_amount.size() << endl;
			m.unlock();
			this_thread::sleep_for(chrono::seconds(1));
		}
	}

}
int main()
{
	workstation *ws = new workstation();
	robot Arm;
	auto aleft = bind(&robot::catch_LeftMove, Arm, ws);
	auto aRight = bind(&robot::catch_RightMove,  Arm,ws);
	thread t1(aleft);
	thread t2(aRight);


	t1.join();
	t2.join();
}