#include<iostream>
#include<string>
using namespace std;
int FunRead_number(string message)
{
	int num=0;

	do
	{
		cout << message << endl;
		cin >> num;
		cout << endl;

	} while (num <= 0);

		return num;
}
void FunPrint_the_result(int number)
{
	int Counter = 0,Counter2=0;
	 
	while (number > 0)
	{
		Counter = number % 10;
		number = number / 10;
		if (Counter == 2)
		{
			Counter2++;

		}
	}
	cout << "the number of -2- in your number is : " << Counter2 << endl;
}
int main()
{
	
	FunPrint_the_result(FunRead_number("enetr the number \n"));

	return 0;
}