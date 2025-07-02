#include<iostream>
#include<string>
using namespace std;

struct StrNumber
{
	int num[3];
};

StrNumber FunNumbers()
{
	StrNumber nums;
	cout << "Enter 3 numbers\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> nums.num[i];
	}
	return nums;
}

void FunPrint_the_number(StrNumber nums)
{
	for (int i = 0; i < 3; i++)
	{
		cout << "The number " << i + 1 << " : " << nums.num[i] << endl;
	}
}

int FunSum(StrNumber nums)
{
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum += nums.num[i];
	}
	return sum;
}

int main()
{
	StrNumber nums;
	nums = FunNumbers();

	cout << "\n--- Entered Numbers ---\n";
	FunPrint_the_number(nums);

	cout << "\nSum = " << FunSum(nums) << endl;

	cout << "the avg of nmubers is : " << FunSum(nums) / 3 << endl;
	return 0;
}
