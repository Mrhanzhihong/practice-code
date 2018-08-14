#include "iostream"
using namespace std;
void  main()
{
	int year;
	bool Isleapyear;

	cout << "Enter the year:";
	cin >> year;

	Isleapyear = (year % 4 ==0 && year % 100 != 0 || (year % 400 == 0));

	if (Isleapyear)
	{
		cout << year <<"is a leap year!"<<endl;
	}

	else
		cout<< year << "is not a leap year!"<<endl;

}