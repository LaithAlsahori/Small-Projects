#include<iostream>
#include<string>
using namespace std;
struct stthe_data
{
	int total_bill = 0, cash_paid = 0;
};
stthe_data FunRead_the_data()
{
	stthe_data the_data;

	cout << "enter the total bill : ";
	cin >> the_data.total_bill;
	cout << "enter the cash paid : ";
	cin >> the_data.cash_paid;
return the_data;
}
int FunCheck_the_data(stthe_data the_data)
{
	int con;
	

	if (the_data.total_bill > 0 && the_data.cash_paid > 0)
	{
		int con = the_data.cash_paid - the_data.total_bill;
		return con;
    }
	else
	{
		cout << "your number is false try again\n";
		return 0;
	}
}
void FunPrint_the_data(int con)
{
	cout << "the result : " << con << endl;
}
int main()
{

	FunPrint_the_data(FunCheck_the_data( FunRead_the_data()));

	return 0;
}
