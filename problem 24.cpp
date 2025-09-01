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

	} while (num <= 0);

	return num;
}
int PrintThe_number(short DigitToCheck, int number)
{
	int counter = 0, freqcounter = 0;

	while (number > 0)
	{
		counter = number % 10;
		number = number / 10;
		if (DigitToCheck == counter)
		{
			freqcounter++;
		}
	}
	return freqcounter;
}
void FunPrint_the_number()
{
	int number=FunRead_the_number("enter the number\n");

	for (int i = 0; i <= 9; i++)
	{
		
cout<<"the number of digit is = "<<i<<" its number is : "<< PrintThe_number(i, number);
cout << endl;
	}
}
int main()
{
	

	FunPrint_the_number();
	
	return 0;
}