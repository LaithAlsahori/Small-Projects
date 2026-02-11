#include<iostream>
using namespace std;
int FunRead_The_Number(int &num)
{
	
	do
	{
		cout << "enter the number \n";
		cin >> num;

	} while (num<=0);

	return num;
}
void FunPrint_The_Number(int num)
{
	if (num==0)
	{
		return;
    }
	FunPrint_The_Number(num - 1);
	cout << num << endl;
}
int main()
{
	int num=0;
	FunRead_The_Number(num);
	cout << "the ascending order numbers using the recursion \n";
	FunPrint_The_Number(num);

	return 0;
}