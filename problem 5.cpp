#include<iostream>
#include<string>
using namespace std;
enum The_situation{TRUE=1,FALSE=0};
int FunRead_the_mark()
{
	int mark;
	cout << "enter your mark ";
	cin >> mark;
	return mark;
}
The_situation FunCheck_the_mark(int mark)
{
	The_situation situat;

	if (mark >= 50)
	{
		return situat = TRUE;
	}
	else
	{
		return situat = FALSE;
	}
}
void FunPrint_the_mark(The_situation situat)
{
	
	switch (situat)
	{
	case TRUE:
		cout << "PASS";
		system("color A");
		break;
	case FALSE:
		cout << "FAIL";
		system("color C");
		break;
	}
}
int main()
{
	int mark;
	string test=" ";
	
	do
	{
		FunPrint_the_mark(FunCheck_the_mark(FunRead_the_mark()));

		cout << "\nenter [YES] want start and enter [NO] if you dont\n";
		cin >> test;

	} while (test == "YES");

	return 0;
}