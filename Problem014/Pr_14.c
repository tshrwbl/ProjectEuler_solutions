#include<stdio.h>

//TO DO
/*
The following iterative sequence is defined for the set of positive integers:

n ? n/2 (n is even)
n ? 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 ? 40 ? 20 ? 10 ? 5 ? 16 ? 8 ? 4 ? 2 ? 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/
int calTerms(unsigned long long int num);

int main(void)
{
	int maxTerms = 0;
	int maxNum;
	int limit = 1000000;
	
	for (int i = limit; i > limit / 2; i--)
	{
		if (maxTerms < calTerms(i))
		{
			maxTerms = calTerms(i);
			maxNum = i;
			printf("New max: %i terms for %i\n", maxTerms, maxNum);
		}
	}
	printf("\nThe max is %i with %i terms \n", maxNum, maxTerms);
}

int calTerms(unsigned long long int num)
{
	int terms = 0;
	while (num != 1)
	{
		if (num % 2 == 0)
		{
			num /= 2;
		}
		else
		{
			num *= 3;
			num++;
		}
		terms++;
	}
	return terms;
}
