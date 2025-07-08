#include<iostream>
#include<string>
using namespace std;
int FunRead_the_number(string message)
{
	int num = 0;
	do
	{
		cout << message << endl;
		cin >> num;
	} while (num < 0);

	return num;
}
int FunFactorial(int num)
{
	int fact = 1;
	for (int test = 1; test <= num; test++)
	{
		fact *= test;
	}
	cout << "the factorial for your number is : " << fact << endl;
	return fact;
}
int main()
{

	FunFactorial(FunRead_the_number("enter number 0<"));

	system("pause");
	return 0;
}
