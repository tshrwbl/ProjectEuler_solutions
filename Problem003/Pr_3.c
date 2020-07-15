/*
# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143 ?

python code for the same
def prime(val):
	if val % 2 == 0:
		return False
	for i in range(3,val,2):
		if val % i == 0:
			return False
	return True

for i in range(3,600851475143,2):
	if 600851475143 % i == 0:
		if prime(600851475143//i):
			print("ans " , 600851475143//i) */
			
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(unsigned long int num);

int main(void)
{
	unsigned long long int limit = 600851475143;
	int sqrtLimit = sqrt((double)limit) + 1;
	int smallNum[sqrtLimit / 2];
	int seq = 0;
		
	for (int i = 3; i < sqrtLimit; i += 2)
	{
		if (limit % i == 0)
		{
			//printf("%i %lld \n", i , limit / i);
			if (isPrime (limit / i))
			{
				printf("ans %lld \n", limit / i);
				return 0;
			}
			else
			{
				smallNum[seq++] = i;
			}
		}
	}	
	
	for (int i = seq; i > 2; i--)
	{
		if (isPrime (smallNum[i]))
			{
				printf("ans %i \n", smallNum[i]);
				return 0;
			}
	}
}

bool isPrime(unsigned long int n)
{
	if (n % 2 == 0)
	{
		return false;
	}
	for (int i = 3; i <= sqrt((double) n) + 1; i += 2)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}
