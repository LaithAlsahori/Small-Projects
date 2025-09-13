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
		cout << endl;

	} while (num <= 0);

		return num;
}
void FunPrint_the_reselt(int number)
{
	while (number >= 1)
	{
		for (int i = 1; i <= number;i++)
		{

			cout << number;
        }
		cout << endl;
		number--;
    }
}
int main()
{

	FunPrint_the_reselt(FunRead_the_number("enter the number"));

	return 0;
}