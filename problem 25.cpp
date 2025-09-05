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
int ReverseNumber(int Number)
{
    int Remainder = 0;
    int Number2 = 0;


    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Remainder;
    }

    return Number2;
}
bool IsPalindromeNumber(int Number)
{
    return Number == ReverseNumber(Number);
}
int main()
{
    if (IsPalindromeNumber(FunRead_the_number("enter the number\n")))
    {
        cout << "YOUR NUMBER IS PALINDROME\n";
        system("color 1E");
    }
    else
    {
        cout << "YOUR NUMBER IS NOT PALINDROME\n";
        system("color 4E");
    }

	return 0;
}