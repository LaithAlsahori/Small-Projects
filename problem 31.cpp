#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int FunRead_the_positeve_number(string message)
{
	int number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
		cout << endl;

	} while (number <= 0);

		return number;
}
void FunPrint_the_keys()
{
	int num = FunRead_the_positeve_number("enter the number \n");
	

	for (int i = 1; i <= num; i++)
	{
		cout << "KEY : [" << i << "] ";
		
		for (int j = 1; j <= 4; j++)
		{
			
			cout << char(rand() % (90 - 65 + 1) + 65);
			cout << char(rand() % (90 - 65 + 1) + 65);
			cout << char(rand() % (90 - 65 + 1) + 65);
			cout << char(rand() % (90 - 65 + 1) + 65);
			if(j<=3)
			cout << "-";
				
		}
		cout << endl;
	}
}
int main()
{

	FunPrint_the_keys();
	return 0;
}