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
int PrintThe_number(short DigitToCheck,int number)
{
	int counter = 0,freqcounter=0;

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
int main()
{
	int number = FunRead_the_number("enter the number\n");
	short DigitToCheck = FunRead_the_number("enetr the digit to check \n");

	cout << "the number of digit is = " << DigitToCheck << " its number is : "
		<< PrintThe_number(DigitToCheck, number);

	return 0;
}