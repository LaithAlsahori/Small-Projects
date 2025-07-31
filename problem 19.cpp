#include<iostream>
#include<string>
#include<cmath>
using namespace std;
enum enprime_number { prime = 1,notprime=0 };
int FunRead_the_number(string message)
{
	int num = 1;
	do
	{
		cout << message << endl;
		cin >> num;

	} while (num <= 1);
	return num;
}
enprime_number FunCheck_the_number(int number)
{
	int m = round(number / 2);
	for (int con = 2; con <= m; con++)
	{
		if (number % con == 0)
		{
			return enprime_number::notprime;
		}
	}
	return enprime_number::prime;
}
void FunPrint_the_number(int number)
{
	cout << "\n the prime numbrs from 1 to " << number << endl;;
	for (int i=1;i<=number;i++)
	{
		if (FunCheck_the_number(i) == enprime_number::prime)
		{
			cout << i << endl;
        }
	}
}
int main()
{

	FunPrint_the_number(FunRead_the_number("enter the positive number "));

	return 0;
}