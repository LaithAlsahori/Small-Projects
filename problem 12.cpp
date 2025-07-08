#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int FunRead_the_number(string message)
{
	int num = 0;
	cout << message << endl;
	cin >> num;
	return num;
}
int FunGive_the_power(int num)
{
	for (int test = 1; test <= num; test++)
	{
		cout << "the power " << test << " for your number is : " << pow(num, test);
		cout << endl;
	}
	return num;
}
int main()
{

	FunGive_the_power(FunRead_the_number("enter the any number"));

	system("pause");
	return 0;
}