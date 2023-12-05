#include"FileIO.h"
#include<iostream>
#include<sstream>

#include<string>
using namespace std;
void FileIO::testFIO()
{
	//注意文件的寻找路径是相对.exe文件路径的。不是相对于源码路径的
	fstream fs("../myfile.txt");

	if (fs.is_open())
	{
		cout << "文档打开" << endl;
	}
	else
	{
		cout << "没打开" << endl;
	}
	
	string temp;
	ostringstream oss1;
	while (getline(fs, temp))
	{
		oss1 << temp;
		
	}
	cout << oss1.str() << endl;

}

 void FileIO::testwrite()
{
	 fstream fs("../myfile.txt",ios_base::app);
	 string aa = "\nhelloworld\n";
	 fs.write(aa.c_str(), aa.length());
}