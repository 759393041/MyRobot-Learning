#include "noskipws_test.h"
void noskipws_test::test_noskipws(char NTstr)
{

	cin >> noskipws  ;
	while (NTstr!='\n')
	{
		cin >> NTstr;
		cout << NTstr;
	}

}