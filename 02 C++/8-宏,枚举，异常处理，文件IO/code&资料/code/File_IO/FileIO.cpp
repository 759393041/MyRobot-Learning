#include"FileIO.h"
#include<iostream>
#include<sstream>

#include<string>
using namespace std;
void FileIO::testFIO()
{
	//ע���ļ���Ѱ��·�������.exe�ļ�·���ġ����������Դ��·����
	fstream fs("../myfile.txt");

	if (fs.is_open())
	{
		cout << "�ĵ���" << endl;
	}
	else
	{
		cout << "û��" << endl;
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