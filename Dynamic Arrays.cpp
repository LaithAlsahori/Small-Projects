#include<iostream>
using namespace std;
int FunRead_The_Positive_Number(string message)
{
	int num = 0;

	cout << message;

	cin >> num;

	return num;
}
void FunRead_And_Print_The_Students_Grades()
{
	int* ptr;

	int num = FunRead_The_Positive_Number("Enter the number of students present\n");

    ptr = new int[num];
	for (int i = 0; i < num; i++)
	{
		cout << "Enter the grade of student number [" << i+1 << "] : ";
		cin >> *(ptr + i); 
	}
	cout << "\nStudents grades:\n";
	for (int i = 0; i < num; i++)
	{
		cout << "Grade [" << i+1 << "] = " << *(ptr + i) << endl;
	}

	delete[] ptr;
}

int main()
{
	
	
	
	FunRead_And_Print_The_Students_Grades();

	return 0;
}