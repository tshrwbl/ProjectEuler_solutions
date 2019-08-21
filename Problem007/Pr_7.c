#include<stdio.h>
#include<math.h>
#include<stdbool.h>

//TO DO
// What is the 10 001st prime number?

bool isPrime(int n);

int main (void)
{
	//total prime found
	int primeNum = 0;
	
	int num = 3;
	while(primeNum != 10000)
	{
		if (isPrime(num))
		{
			primeNum++;
		}
		num += 2;		
	}
	
	//print the 10001st prime number
	printf("%i \n", num - 2);
}

bool isPrime(int n)
{
	for (int i = 3; i <= sqrt((double) n); i += 2)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}
