#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
enum EnThe_Data{palindrome=1,notpalindrom=0};
int FunRead_The_Number(string message)
{
	int num = 0;

	cout << message;
	cin >> num;
	cout << endl;

	return num;
}
void FunRead_The_Number_Of_Array(int Arr[100],int &ArrLength)
{
	cout << "enter  the array length\n";
	cin >> ArrLength;
	cout << endl;

	for (int i = 0; i < ArrLength; i++)
	{
		cout << "enter the number [" << i + 1 << "] : ";
		cin >> Arr[i];
	}
}
void FunPrint_The_Array(int Arr[100], int ArrLength)
{
	
	for (int i = 0; i < ArrLength; i++)
	{
		
		cout << Arr[i] << " ";
	}
}
bool FunThe_Number_Is_Palindrome(int Arr[100], int ArrLength)
{
	int test = ArrLength / 2;

	for (int i = 0; i < test; i++)
	{
		if (Arr[i] != Arr[ArrLength - 1 - i])
		{
			return false;
		
	    }
		else
		{
			return true;
		}
		
	}
}
EnThe_Data FunThe_Data(int Arr[100], int ArrLength)
{
	EnThe_Data The_Data;

	if (FunThe_Number_Is_Palindrome(Arr, ArrLength) == true)
	{
		cout << "your number is palindrome \n";
		return palindrome;
	}
	else
	{
		cout << "your number is not  palindrome \n";
		return notpalindrom;
	}

	
}
int main()
{

	int Arr[100], ArrLength = 0;
	EnThe_Data The_Data;

	FunRead_The_Number_Of_Array(Arr, ArrLength);
	cout << "\nyour numbers is : ";
	FunPrint_The_Array(Arr, ArrLength);

	cout << endl;
	FunThe_Data(Arr, ArrLength);

	return 0;

	
}