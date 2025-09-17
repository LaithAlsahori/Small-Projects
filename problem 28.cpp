#include<iostream>
#include<string>
using namespace std;
void FunPrint_the_letter(string message)
{
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int l = 65; l <= 90; l++)
			{
				cout << char(i) << char(j) << char(l) << endl;
			}
		}
    }
}
int main()
{

	FunPrint_the_letter("the letter from AAA to ZZZ\n");
	return 0;
}