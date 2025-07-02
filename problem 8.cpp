#include<iostream>
#include<string>
using namespace std;
struct StrNumbers_using_array
{
	int arr_of_number[100];
};
StrNumbers_using_array FunSpecify_the_number(int &length)
{
	StrNumbers_using_array num;
	

	cout << "Enter the number of digits you want \n";
	cin >> length;
	
	return num;
}
void  FunRead_the_number(StrNumbers_using_array &num, int length)
{
	for (int test = 0; test < length; test++)
	{
		cout << "enter the number " << test + 1 << " : ";
		cin >> num.arr_of_number[test];
	}
}
void FunPrint_the_number(StrNumbers_using_array num, int length)
{
	for (int test = 0; test < length; test++)
	{
		cout<<"the number "<<test+1<<" is : "<< num.arr_of_number[test];
		cout << endl;
	}
}
int FunPrint_the_max_number(StrNumbers_using_array num, int length)
{
	int test2=0;

	for (int test = 0; test <length; test++)
	{
		if (test2 < num.arr_of_number[test])
		{
			test2 = num.arr_of_number[test];
			
		}
	}
	return test2;
}
int main()
{
	int length;
	StrNumbers_using_array num;
	
	FunSpecify_the_number(length);
	FunRead_the_number( num,  length);
	cout << "***************************";
	cout << endl;
	FunPrint_the_number( num,  length);
	cout << "***************************";
	cout << endl;
	cout << "the larges number is : ";
	cout<<FunPrint_the_max_number( num,  length);

	return 0;
}