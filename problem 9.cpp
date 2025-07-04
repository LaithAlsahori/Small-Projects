#include<iostream>
using namespace std;

int FunRead_the_number()
{
    int num;
    cout << "Enter a positive number: ";
    cin >> num;
    return num;
}

void FunCheck_the_number(int num)
{
    if (num <= 0)
    {
        cout << "Please enter a number greater than 0.\n";
        return;
    }

    for (int test = 1; test <= num; test++)
    {
        cout << "Number " << test << " is: " << test << endl;
    }
}

int main()
{
    int number = FunRead_the_number();
    FunCheck_the_number(number);
    return 0;
}
