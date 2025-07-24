#include<iostream>
#include<string>
using namespace std;
void FunThe_header()
{
	cout << "\t\t\tmultiplication table from 1 to 10 \n\n";
	for (int i = 1; i <= 10; i++)
	{
		cout << "    " << i << "    ";
	}
	cout << "\n_________________________________________________________________________________\n";
}
string Funcolom_sperator(int i)
{
	if (i < 10)
		return "   | ";
	else
		return "  | ";
}
void FunThe_table()
{
	FunThe_header();

	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << Funcolom_sperator(i) << "\t";
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
}
int main()
{
	
	FunThe_table();
	return 0;
}