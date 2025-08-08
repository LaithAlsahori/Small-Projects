#include<iostream>
#include<string>
#include<cmath>
using namespace std;
enum enperfect_number { perfect = 1, not_perfect = 0 };
int FunThe_test(string message)
{
	int test = 0;
	cout << message << endl;
	cin >> test;
	return test;
}
int FunThe_number(string message)
{
	int num = 0;
	do
	{
		cout << message << endl;
		cin >> num;

	} while (num < 0);

	return num;
}
enperfect_number FunPerfect_number(int number)
{

	int sum = 0;


	for (int i = 1; i <= number / 2; i++)
	{
		if (number % i == 0)
			sum += i;
	}
	if (number == sum)
	{
		return enperfect_number::perfect;
	}
	else
	{
		return enperfect_number::not_perfect;
	}
}
void Funprint_number(int number)
{
	if (FunPerfect_number(number) == enperfect_number::perfect)
	{
		cout << "\033[32m";
		cout << "the number " << number << " is perfect number\n";
	}
	else
	{
		cout << "\033[31m";
		cout << "the number " << number << " is not perfect number\n";
		
	}
	cout << "\033[0m";
}
int main()
{

	while (FunThe_number("enter 1 if you want start and enter 0 if you not ") == 1)
	{
		cout << "*************************************************************\n";
		Funprint_number(FunThe_number("enter the positive number \n"));
		cout << "*************************************************************\n";
	};

	return 0;
} 