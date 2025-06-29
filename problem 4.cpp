#include<iostream>
#include<string>
using namespace std;
enum enDriver_license { YES = 1, NO = 0 };
struct stInfo
{
	string name;
	int age;
};
void funRead_the_data(enDriver_license& driver, stInfo& person)
{
	cin.ignore();
	cout << "enter your full name \n";
	getline(cin, person.name);

	cout << "enter your age (but you must be over 21 years old ) \n";
	cin >> person.age;

	string test;

	cout << "enter [YES] if you have driver license and enter [NO] if you not \n";
	cin >> test;

	if (test == "YES")
		driver = YES;
	else
		driver = NO;

}
void funCheck_the_number(enDriver_license& driver, stInfo& person)
{
	if (driver == YES && person.age >= 21)
	{
		cout << "YOU ARE ACCEPTED IN THE COMPANY";
		system("color A");
	}
	else
	{
		cout << "YOU ARE NOT ACCEPTED IN THE COMPANY";
		system("color C");
	}
}
int main()
{
	enDriver_license driver;
	stInfo person;
	string test;
	string test2;

	cout << "ENTER YES IF WANT START AND ENTER NO IF YOU NOT \n";
	cin >> test2;
	do
	{

		while (test2 == "YES")
		{
			funRead_the_data(driver, person);
			funCheck_the_number(driver, person);
			break;
		}
		cout << "ENTER YES IF WANT START AND ENTER NO IF YOU NOT \n";
		cin >> test2;
	} while (test2 == "YES");

	return 0;
}