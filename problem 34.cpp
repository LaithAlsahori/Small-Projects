#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int FunReadTheNumber(string message)
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
int FunRandomNumber(int from,int to)
{
	int random = rand()% (to - from + 1) + from;
	return random;
}
void FunFillTheNumberInArray1(int Arr[100],int &ArrLength)
{
	ArrLength = FunReadTheNumber("enter how many you need random numbers \n");

	for (int i = 0; i < ArrLength; i++)
	{
		Arr[i] = FunRandomNumber(1, 100);
	}
}
void FunPrintArray(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		cout<< Arr[i] << " ";
	}
}
void AddArrayElement(int Number, int Arr[100], int& ArrLength)
{
	ArrLength++;
	
	Arr[ArrLength - 1] = Number;
}
void CopyOddNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
	
	for (int i = 0; i < arrLength; i++)
	{
		
		if (arrSource[i] % 2 != 0)
		{
			
			AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));

	int Arr[100], ArrLength = 0;

	
	FunFillTheNumberInArray1(Arr, ArrLength);

	int arr2[100];     
	int arr2Length = 0; 

	
	CopyOddNumbers(Arr, arr2,ArrLength, arr2Length);

	
	cout << "\nArray 1 elements:\n";
	 FunPrintArray(Arr, ArrLength);

	
	cout << "\nArray 2 Odd numbers:\n";
	 FunPrintArray(arr2, arr2Length);

	return 0;
}
