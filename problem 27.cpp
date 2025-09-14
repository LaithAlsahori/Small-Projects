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

	} while (num<=0);

	return num;
}
void FunNumber_pattern(int number)
{
	

	for (int i = 1; i <= number; i++)
	{
		
		for (int j = 1; j <= i;j++)
		{
			cout << i;
			
        }
		cout << endl;
    }
}
int main()
{

	FunNumber_pattern(FunRead_the_number("enter the number \n"));

	return 0;
}