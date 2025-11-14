#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;
enum EnThe_Data { easy = 1, medium = 2, hard = 3, mix = 4 };
struct StThe_Data
{
	int number_of_round = 0;
	int num1 = 0;
	int num2 = 0;
	char The_mathematical_operation = '+';
	int the_result = 0;
	int correct_answer = 0;
	int wrong_answer = 0;
	float your_avg = 0;
};
int FunRead_The_Random_Number(int From, int To)
{
	return rand() % (To - From + 1) + From;
}
int FunRead_The_Number(string message)
{
	int num = 0;
	do
	{
		cout << message << " ? ";
		cin >> num;
		cout << endl;

	} while (num <= 0);

	return num;
}
void FunThe_Test_Difficulty(EnThe_Data &The_Data)
{
	int the_test;
	do
	{
		 the_test = FunRead_The_Number("enter question level : easy[1],medium[2],hard[3],mix[4]");
	} while (the_test > 4 || the_test < 1);

	 The_Data = EnThe_Data(the_test);
}
int FunGive_The_Question(EnThe_Data EThe_Data)
{

	switch (EThe_Data)
	{
	case EnThe_Data::easy:
		return FunRead_The_Random_Number(0, 33);
		break;
	case EnThe_Data::medium:
		return FunRead_The_Random_Number(33, 55);
		break;
	case EnThe_Data::hard:
		return FunRead_The_Random_Number(55, 100);
		break;
	case EnThe_Data::mix:
		return FunRead_The_Random_Number(0, 100);
		break;
	}
}
int FunThe_Test_Operation(int &test)
{
	
	do
	{
		cout << "enter question type : add[1],sub[2],mul[3],div[4],mix[5] ? ";
		cin >> test;

	} while (test<1||test>5);

	return test;
}
char FunGive_The_Operation(int test)
{

	switch (test)
	{
	case 1:
			return '+';
		break;
	case 2:
		return '-';
		break;
	case 3:
		return '*';
		break;
	case 4:
		return '/';
		break;
	case 5:
		char ops[] = { '+', '-', '*', '/' };
		return ops[rand() % 4];
		break;
	}
}
void FunFinal_Ruselt(StThe_Data The_Data)
{


	cout << "________________________\n";
	cout << "HOW MANY GAME YOU PLAYED : " << The_Data.number_of_round << endl;
	cout << "THE CORRECT ANSWER : " << The_Data.correct_answer << endl;
	cout << "THE WORNG ANSWER : " << The_Data.wrong_answer << endl;
	cout << "THE AVERAGE :" << The_Data.correct_answer << "/" << The_Data.number_of_round << endl;
	cout << "________________________\n";
}
void FunStart_Game(StThe_Data& The_Data)
{
	EnThe_Data  EThe_Data;
	int test=0;
	int your_answer = 0;

	The_Data.number_of_round = FunRead_The_Number("enter how many question do you want to answer ");
	FunThe_Test_Difficulty(EThe_Data);
	
	FunThe_Test_Operation(test);

	for (int i = 1; i <= The_Data.number_of_round; i++)
	{
		cout << "\n------QUESTION[" << i  << "]------\n";
		The_Data.num1 = FunGive_The_Question(EThe_Data);
		The_Data.num2= FunGive_The_Question(EThe_Data);
		The_Data.The_mathematical_operation = FunGive_The_Operation(test);
		cout << The_Data.num1 << endl;
		cout << "   " << The_Data.The_mathematical_operation << endl;
		cout << The_Data.num2 << endl;
		cout << "_______\n";
		

		switch (The_Data.The_mathematical_operation)
		{
		case '+': The_Data.the_result = The_Data.num1 + The_Data.num2; break;
		case '-': The_Data.the_result = The_Data.num1 - The_Data.num2; break;
		case '*': The_Data.the_result = The_Data.num1 * The_Data.num2; break;
		case '/':
			if (The_Data.num2 != 0)
				The_Data.the_result = The_Data.num1 / The_Data.num2;
			else
				The_Data.the_result = 0;
			break;
		}
		
		cout << "enter your answer : ";
		cin >>your_answer;
			
		if (your_answer == The_Data.the_result)
		{
			cout << "\033[32m";
			cout << "YOUR ANSWER IS TRUE \n";
			cout << "\033[0m";
			The_Data.correct_answer++;
		}
		else
		{
			cout << "\033[31m";
			cout << "YOUR ANSWER IS FALSE , THE CORRECT ANSWER IS : " << The_Data.the_result << endl;
			cout << "\033[0m";
			The_Data.wrong_answer++;
		}
	}
	FunFinal_Ruselt(The_Data);
}

int main()
{
	srand((unsigned)time(NULL));
	StThe_Data The_Data;

	char x = 'y';
	do 
	{
		FunStart_Game(The_Data);
		cout << "if you want play again enter y/Y \n";
		cin >> x;

	} while (x == 'y' || x == 'Y');

	
	return 0;
}