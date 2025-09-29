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
	FunRand_numbers(97, 122);

	//cout <<"the small random letter : "<<char( FunRand_numbers(97,122))

	return 0;
}