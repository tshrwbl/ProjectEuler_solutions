/*
TODO 
A positive integer n is called squarefree, if no square of a prime divides n, thus 1, 2, 3, 5, 6, 7, 10, 11 are squarefree, but not 4, 8, 9, 12.
How many squarefree numbers are there below 2^50? 
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

bool is_prime(unsigned long long int num);
unsigned long long int power(int num, int rest_to);

int main(void)
{
	unsigned long long int reverse_counter = (power(2, 50) / 4) + (power(2, 50) / 9) - ((power(2, 50) / 9) / 4); //Num not squarefree
	printf("%lld \n", reverse_counter);
	unsigned long long int temp_counter = 0;
	//Making repo of prime below 2^25
	unsigned long long int upper_limit = power(2, 25);
	unsigned long long int *primes = malloc(upper_limit * sizeof(unsigned long long int));
	primes[0] = 2;
	primes[1] = 3;
	unsigned int seq = 2;
	for(unsigned int i = 3; i <= upper_limit; i += 2)
	{
		if(is_prime(i))
		{
			primes[seq] = i;
			temp_counter += power(2, 50) / (i * i);
			reverse_counter += temp_counter;
			for(unsigned int j = 0; j < seq; j++)
			{
				reverse_counter -= temp_counter / (primes[j] * primes[j]);
			}
			seq++;
			printf("%lld %lld %i \n", reverse_counter, temp_counter, i);
		}
	}
	printf("%i , %i \n", seq, primes[seq - 1]);
	reverse_counter = power(2, 50) - reverse_counter;
	printf("%lld ", reverse_counter);
}

bool is_prime(unsigned long long int num)
{	
	/*if(num % 2 == 0)
	{
		return false;
	}*/
	unsigned long long int sqrt_num = round(sqrt((double) num) + 1);
	for(unsigned long long int i = 3; i <= sqrt_num; i += 2)
	{
		if(num % i == 0)
		{
			return false;
		}
	}
	return true;
}

unsigned long long int power(int num, int rest_to)
{
	if(num == 1)
	{
		return 1;
	}
	unsigned long long int answer = num * num;
	int counter = 2;
	while((counter *2) < rest_to)
	{
		answer *= answer;
		counter *= 2;
	}
	for(int i = 0; i < (rest_to - counter); i++)
	{
		answer *= num;
	}
	return answer;
}
