#pragma once
#include<string.h>
#include<vector>
using namespace std;
namespace student1
{
	class student
	{
		public:
			string stuName;
			unsigned int classNumber;
			vector<int> score;
		public:
		student();
		~student();
		void show()

		{
			cout << stuName << endl;
			cout << classNumber << endl;
			for (auto it:score)
			{
				cout << it << endl;

			}
		}

	};

	student::student()
	{
		cout << "enter the student name" << endl;
		cin >> stuName;
		cout << "enter the student Classnumber" << endl;
		cin >> classNumber;
		cout << "enter the student SCORE" << endl;
		for (int i = 0; i < 5; i++)
		{
			int number;
			cout << "enter the student score" << endl;

			cin >> number;
			score.push_back(number);
		}




	}

	student::~student()
	{
	}

}