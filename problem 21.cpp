#include<iostream>
#include<string>
using namespace std;
int FunRead_positive_number(string message)
{
	int num=0;

	do
	{
		cout << message << endl;
		cin >> num;
	} while (num <= 0);

	return num;
}
void FunPrint_the_numbers(int number)
{
	int Remainder = 0;

	while (number>0)
	{
		Remainder = number % 10;
		number = number / 10;
		cout << Remainder << endl;
	}
}
int main()
{

	FunPrint_the_numbers(FunRead_positive_number("enter the positive number ?"));

	return 0;
}