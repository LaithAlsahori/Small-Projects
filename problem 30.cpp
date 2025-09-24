#include<iostream>
#include<cstdlib>
using namespace std;
int FunRand_numbers(int from, int to)
{
	int randnum = rand() % (to - from + 1) + from;

	return randnum;
}
int main()
{
	srand((unsigned)time(NULL));

	cout << FunRand_numbers(1, 10);

	return 0;
}