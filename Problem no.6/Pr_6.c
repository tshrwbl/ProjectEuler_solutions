#include<stdio.h>

//TO DO
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.


int main(void)
{
	// Total number
	int n = 100;
	
	//sum of squeares
	int sumSqr = n * (n + 1) * (2 * n + 1) / 6;
	
	//square of summation of n num
	int sqrSum = ((n / 2) * (n + 1)) * ((n / 2) * (n + 1));
	
	//difference
	int dif = sqrSum - sumSqr;
	printf("dif = %i\n", dif);
}

