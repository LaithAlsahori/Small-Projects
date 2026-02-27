#include<iostream>
using namespace std;
int main()
{
	int* ptr;
	ptr = new int;
	
	do
	{
		cout << "enter the positive number : ";

		cin >> *ptr;
		
		if (*ptr<0)
		{
			cout << "your number is false try again :";
			cin >> *ptr;

		}

	} while (*ptr<0);

	cout << "Correct number = " << *ptr << endl;

	delete ptr;

	return 0;
}