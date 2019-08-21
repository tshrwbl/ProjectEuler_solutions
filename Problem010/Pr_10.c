//TO DO
//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//Find the sum of all the primes below two million. 20 00 000

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isPrime(int n);

int main (void)
{
	//total prime found
	unsigned long long int primeSum = 2;
	
	int num = 3;
	int limit = 2000000;
	
	while(num < limit)
	{
		if (isPrime(num))
		{
			primeSum += num;
		}
		num += 2;		
	}
	
	//print the 10001st prime number
	printf("%lld \n", primeSum);
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


