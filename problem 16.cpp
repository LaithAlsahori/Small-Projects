#include<iostream>
#include<string>
using namespace std;
struct strthe_data
{
	int days = 0, hours = 0, minutes = 0, seconds = 0;
};
int FunRead_the_number(string message)
{
	int num = 0;
	do
	{
		cout << "enter how many seconds you worked \n";
		cin >> num;
	} while (num < 0);

		return num;

}
strthe_data FunRead_the_data()
{
	strthe_data the_data;

	the_data.seconds = FunRead_the_number("enter how many seconds you worked \n");

	return the_data;
}
strthe_data FunCalculate_the_data(strthe_data the_data)
{
	

	the_data.minutes = the_data.seconds / 60;
	the_data.hours = the_data.minutes / 60;
	the_data.days = the_data.hours / 24;

	return the_data;
}
void FunPrint_the_data(strthe_data the_data)
{
	cout << "the seconds : " << the_data.seconds << endl;
	cout << "the minutes : " << the_data.minutes << endl;
	cout << "the hours : " << the_data.hours << endl;
	cout << "the days : " << the_data.days << endl;
}
int main()
{
	strthe_data the_data;

	the_data = FunRead_the_data();
	the_data = FunCalculate_the_data(the_data);
	FunPrint_the_data(the_data);

	return 0;
}