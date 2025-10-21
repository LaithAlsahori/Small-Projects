#include<iostream>
#include<string>
using namespace std;
int FunRead_The_Number(string message)
{
	int num = 0;

	cout << message << endl;
	cin >> num;
	cout << endl;

	return num;
}
void FunRead_The_Number2(int Arr[100], int &length)
{
	int num = 1;

	while (num == 1)
	{
		Arr[length] = FunRead_The_Number("enter the number");
		length++;

		cout << "do you want add more number ? no = 0 , yes = 1\n";
		cin >> num;
		
	}

	
}
void FunPrint_The_Numbers(int Arr[100], int length)
{
	cout << "\nYou entered these numbers:\n";
	for (int i = 0; i < length; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int Arr[100];
	int length=0;

	FunRead_The_Number2(Arr, length);
	
	FunPrint_The_Numbers(Arr, length);

	return 0;
}
