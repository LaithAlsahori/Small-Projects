#include<iostream>
#include<string>
using namespace std;
int FunRead_the_number(string message)
{
	int number;
	cout << message << endl;
	cin >> number;
	return number;
}
int FunCalculate_the_data()
{
	int number=0,sum=0;

	do {

		number = FunRead_the_number("Enter a number (-99 to stop): ");
		if (number != -99)
			sum += number;


	} while (number != -99);

	
	return sum;

}
void FunShow_the_number(int result)
{
	cout << "the sum is : " <<  result;
}
int main()
{

	int result =FunCalculate_the_data();
	FunShow_the_number(result);

	return 0;
}