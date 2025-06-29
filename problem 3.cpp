#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct info
{
	int num;
};
void read_the_number(info &number)
{
	cout << "enter the number \n";
	cin >> number.num;
}
void check_the_number(info &number)
{
	

	if (number.num % 2 == 0)
	{
		cout << "THE NUMBER IS EVEN \n";
		system("color A ");
	}
	else
	{
		cout << "THE NUMBER IS ODD \n";
		system("color 9");
	}
}
int main()
{
	info number;

	string test;

	cout << "enter yes if you want ready and enter no if you not " << endl;
	cin >> test;
	
		while (test == "yes") {
			
			read_the_number(number);
			check_the_number(number);
			cout << endl;
			cout << "enter yes if you want ready and enter no if you not " << endl;
			cin >> test;
		}
		
		

	

	return 0;
}