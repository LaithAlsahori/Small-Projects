#include<iostream>
using namespace std;
int FunRead_The_Positive_Number()
{
	int num = 0;

		cout << "Enter positive number : ";
		cin >> num;

	return num;
}
void FunFill_Numbers_In_Array(int arr[],int &length)
{
	cout << "enter how many numbers you want enter : ";
	cin >> length;

	for (int i = 0; i < length; i++)
	{
		arr[i]=FunRead_The_Positive_Number();
	}

}
void FunPrint_The_Number(int arr[],int& length,int *ptr)
{

	cout << "\n\nthe numbers in array : ";

	for (int i = 0; i < length; i++)
	{
		cout << *(ptr + i) << " ";
	}
}
void start(int arr[],int &length,int *ptr)
{
	FunFill_Numbers_In_Array(arr,length);
	FunPrint_The_Number(arr, length, ptr);
}
int main()
{
	int arr[100]; //vectorمن الافضل هنا استخدام ال 
	int length = 0;
	int* ptr;

	ptr = arr;

	start(arr, length, ptr);

	return 0;
}