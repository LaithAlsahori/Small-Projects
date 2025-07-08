#include<iostream>
#include<string>
using namespace std;
enum enCheck_the_number{odd=1,even=2};
int FunRead_the_number()
{
	int num=0;
	cout << "enter the number 0<\n";
	cin >> num;
	return num;
}
enCheck_the_number FunCheck_the_number(int num)
{
	if (num % 2 != 0)
		return enCheck_the_number::odd;
	else if (num % 2 == 0)
		return enCheck_the_number::even;
}
int FunThe_final_sum(int num)
{
	int sum = 0;
	int cou = 0;
	for (int test = 0; test < num; test++)
	{
		if (FunCheck_the_number(cou) == enCheck_the_number::even)
		{
			sum += cou;
			
		}
		cou++;
	}
	
	return sum;
}
int main()
{

	int number = FunRead_the_number();
	int result = FunThe_final_sum(number);

	cout << "The sum of even numbers less than >>> " << number << " is : " << result << endl;

	return 0;
}
