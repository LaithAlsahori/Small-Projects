#include<iostream>
using namespace std;

struct StrThe_Data
{
    string name = "laith";
    int age = 20;
    int salary = 200;
};

// ????? ???????? ???????? pointer
void FunRead_The_Data(StrThe_Data* ptr)
{
    cout << "enter your first name : ";
    cin >> ptr->name;

    cout << "enter your age : ";
    cin >> ptr->age;

    cout << "enter your salary : ";
    cin >> ptr->salary;
}

// ????? ???????? ???????? pointer
void FunPrint_The_Data_Using_Pointer(StrThe_Data* ptr)
{
    cout << "\nyour name is : " << ptr->name << endl;
    cout << "your age is : " << ptr->age << endl;
    cout << "your salary is : " << ptr->salary << endl;
}

int main()
{
    StrThe_Data The_Data;

    
    FunRead_The_Data(&The_Data);

    
    FunPrint_The_Data_Using_Pointer(&The_Data);

    return 0;
}