#include<iostream>
#include<string>
using namespace std;
struct stthe_data
{
	int days=0, hour=0, minutes=0, seconds=0;
};
stthe_data FunRead_the_data()
{
	stthe_data the_data;

	cout << "enter how many days you worked \n";
	cin >> the_data.days;
	cout << "enter how many hours you worked \n";
	cin >> the_data.hour;
	cout << "enter how many minutes you worked \n";
	cin >> the_data.minutes;
	cout << "enter how many seconds you worked \n";
	cin >> the_data.seconds;

	return the_data;
}
int FunCalculate_the_time(stthe_data the_data)
{
	int time=0;

	time = (the_data.seconds) + (the_data.minutes * 60) + (the_data.hour * 60 * 60) + (the_data.days * 60 * 60 * 24);
	return time;
}
void FunPrint_the_time(int time)
{
	cout << "the seconds : " << time << endl;
}
int main()
{

	FunPrint_the_time(FunCalculate_the_time(FunRead_the_data()));


	return 0;
}