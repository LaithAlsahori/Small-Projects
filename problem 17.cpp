#include<iostream>
#include<string>
using namespace std;
enum enthe_days{ Sunday=1, Monday=2, Tuesday=3, Wednesday=4, Thursday=5, Friday=6, Saturday=7};
int FunRead_the_number(string message)
{
	int num = 0;
	do
	{
		cout << message << endl;;
		cin >> num;
	} while (num < 1 || num > 7);

	return num;
}
enthe_days the_days(int num)
{
	

	return (enthe_days)num;
}
string FunThe_show(enthe_days the_day)
{
	switch (the_day)
	{
	case enthe_days::Sunday:
		return "sunday";
	case enthe_days::Monday:
		return "monday";
	case enthe_days::Tuesday:
		return "tuesday";
	case enthe_days::Wednesday:
		return "wednesday";
	case enthe_days::Thursday:
		return "thursday";
	case enthe_days::Friday:
		return "friday";
	case enthe_days::Saturday:
		return "saturday";
	default:
		return "invalid";

    }
}
int main()
{
	
	cout<<FunThe_show(the_days(FunRead_the_number("enter the number day\n")));


	return 0;
}