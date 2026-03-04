#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	fstream myfile;

	myfile.open("file.txt", ios::out );
	
	if (myfile.is_open())
	{
		myfile << "hello world \n";
		myfile << "this is my first project with files\n";
		myfile << "my name is laith " << endl;
		
	}

	myfile.close();

	myfile.open("file.txt", ios::in);
	
		if (myfile.is_open())
		{
			string test;

			while (getline(myfile, test))
			{
				cout << test << endl;
			}
		}

		myfile.close();

	return 0;
}