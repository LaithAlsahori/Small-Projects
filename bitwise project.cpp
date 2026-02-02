#include<iostream>
#include<string>
using namespace std;
struct StrThe_Data
{
	char BitWise = '&';
	int FinalRes = 0;
	int InitialNum = 0;
	int SecondNum = 0;
};
StrThe_Data FunRead_The_Operator(StrThe_Data &The_Data)
{
	do
	{
		cout << "enter one of this character & or | and this program return the reslut \n";
		cin >> The_Data.BitWise;

		if (The_Data.BitWise != '&' && The_Data.BitWise != '|')
		{
			cin.clear();
			cin.ignore(1000, '\n');
		}

	} while (The_Data.BitWise != '&' && The_Data.BitWise != '|');

	return The_Data;
}
StrThe_Data FunRead_The_Number(StrThe_Data& The_Data);
void FunStart_BitWise(StrThe_Data &The_Data)
{
	FunRead_The_Operator(The_Data);
	FunRead_The_Number(The_Data);
	if (The_Data.BitWise == '|')
	{
		The_Data.FinalRes = The_Data.InitialNum | The_Data.SecondNum;
	}
	else
	{
		The_Data.FinalRes = The_Data.InitialNum & The_Data.SecondNum;
	}
	cout << "the result of bitwise is : " << The_Data.FinalRes;
}

int main()
{
	StrThe_Data The_Data;
	FunStart_BitWise(The_Data);

	return 0;
}
StrThe_Data FunRead_The_Number(StrThe_Data &The_Data)
{
	cout << "enter the number one : \n";
	cin >> The_Data.InitialNum;
	if (The_Data.InitialNum)
	{
		
	}
	else
	{
		cout << "try again";
	}

	cout << "enter the number two : \n";
	cin >> The_Data.SecondNum;
	if (The_Data.SecondNum)
	{

	}
	else
	{
		cout << "try again";
	}

	return The_Data;
}