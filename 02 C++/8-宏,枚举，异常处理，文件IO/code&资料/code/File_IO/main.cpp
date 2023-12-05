#include<iostream>
#include"boolalpha_test.h"
#include"noskipws_test.h"
#include"FileIO.h"
using namespace std;
typedef boolalpha_test* RR;

int main()
{
	//boolalpha_test bt1;
	//RR bt2 = new boolalpha_test();

	//bt1.testBoolAlpha();
	//bt2->testBoolAlpha();



	//char aa=0;
	//noskipws_test nt1;
	//nt1.test_noskipws(aa);



	FileIO::testwrite();
	FileIO::testFIO();

	system("pause");
}