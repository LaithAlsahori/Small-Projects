#include<iostream>
#include<string>

using namespace std;

int FunRead_the_posetevie_number(string message)
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
int FunRead_the_number(int number[])
{
	int num = FunRead_the_posetevie_number("enter the number \n");
	
	for (int i = 0; i < num; i++)
	{
		cout << "Element [" << i + 1 << "]" << " : ";
		cin >> number[i];
	}
	return num;
}
void FunPrint_the_array(int number[],int size)
{
  
	cout << "\nArray elements are: ";
	for (int i = 0; i < size; i++)
	{
		cout << number[i] << " ";
	}
	cout << "\n\n\n";
	
}
int FunRead_the_research_number()
{
	cout << "enter any number want reserch for it \n";
	int num = 0;

	do
	{
		cin >> num;
		cout << endl;

	} while (num <= 0);
	cout << "the number you want to chack is : " << num << endl;
	return num;
}
void FunPrint_how_many_the_number_repeated(int number[], int size)
{
	int test_number = FunRead_the_research_number();
	int test = 0;
	for (int i = 0; i < size; i++)
	{
		if (number[i] == test_number)
		{
			test++;
		}
	}
	cout << "your number " << test_number << " repeated for : " << test << " times in your array" << endl;
}
int main()
{
	int number[100];

	int size = FunRead_the_number(number);

	FunPrint_the_array(number,size);

	FunPrint_how_many_the_number_repeated(number, size);

	return 0;
}