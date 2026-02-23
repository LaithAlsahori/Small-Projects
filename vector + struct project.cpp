#include <vector>
#include <iostream>
using namespace std;
struct StThe_Data
{
	string name = "laith";
	int age = 20;
	int salary = 1000;
};
StThe_Data FunRead_The_Data(StThe_Data &The_Data)
{
	cout << "\nenter the name : ";
	cin >> The_Data.name;

	cout << "\nenter the age : ";
	cin >> The_Data.age;

	cout << "\nenter the salary : ";
	cin >> The_Data.salary;

	return The_Data;
}
void FunWrite_The_Data(vector <StThe_Data> &vThe_Data , StThe_Data &The_Data)
{
	FunRead_The_Data(The_Data);

	vThe_Data.push_back(The_Data);
}
void FunPrint_The_Data(StThe_Data The_Data , vector <StThe_Data>& vThe_Data)
{
	char test = 'y';

	cout << "enter the Y if you want start and N if you not : \n";
	cin >> test;

	while (test == 'Y' || test == 'y')
	{
		FunWrite_The_Data(vThe_Data, The_Data);

		if (test == 'Y' || test == 'y')
		{
			cout << "\nIs there another one? Enter Y if you want to complete.\n";
			cin >> test;
        }
	}
	for (StThe_Data test : vThe_Data)
	{
		cout << "the name is : " << The_Data.name << endl;
		cout << "the age is : " << The_Data.age << endl;
		cout << "the salary is : " << The_Data.salary << endl;

	}
}
int main()
{
	vector <StThe_Data> vThe_Data;
	StThe_Data The_Data;

	FunPrint_The_Data( The_Data, vThe_Data);

	return 0;
}