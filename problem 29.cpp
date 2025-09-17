#include<iostream>
#include<string>
using namespace std;
string FunGuess_Password(string message)
{
	string password = "AAA";

	cout << message << endl;

	cin >> password;

	return password;
}
void FunPrint_the_letter(string password)
{
	string test = "";
	int counter = 0;

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int l = 65; l <= 90; l++)
			{
				counter++;

				test = test + char(i);
				test = test + char(j);
				test = test + char(l);

				cout << "THE TEST : [ " << counter << " ] " << test;
				if (test== password)
				{
					cout << "\033[32m";
					cout << "  -  TRUE" << endl;
					cout << "\033[0m";
				}
				else
				{
					cout << "\033[31m";
					cout << "  -  FALSE" << endl;
					cout << "\033[0m";
				}
				test = "";
			}
		}
	}
}
int main()
{

	FunPrint_the_letter(FunGuess_Password("enter the pass"));

	return 0;
}