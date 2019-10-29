/*
TODO 
A positive integer n is called squarefree, if no square of a prime divides n, thus 1, 2, 3, 5, 6, 7, 10, 11 are squarefree, but not 4, 8, 9, 12.
How many squarefree numbers are there below 2^50? 
*/

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool is_squarefree(unsigned long long int num);
bool is_prime(unsigned long long int num);

int main(void)
{
	unsigned long long int counter = 2; //presummed 1 and 2
	for(unsigned long long int i = 3; i <= pow(2, 50); i++)
	{
		if(is_squarefree(i))
		{
			counter++;
			//printf("YES %lld , %i\n", i, counter);
		}
	}
	printf("%i ", counter);
}

bool is_squarefree(unsigned long long int num)
{
	unsigned long long int sqrt_num = round(sqrt((double) num) + 3);
	//printf("num %lld, sqrt_num %lld \n", num, sqrt_num);
	if(num % 4 == 0)
	{
		return false;
	}
	for(unsigned long long int i = 3; i <= sqrt_num; i++)
	{
		if(is_prime(i))
		{
			if(num % (i * i) == 0)
			{
				return false;
			}
		}
	}
	return true;
}

bool is_prime(unsigned long long int num)
{	
	unsigned long long int sqrt_num = round(sqrt((double) num));
	for(unsigned long long int i = 3; i <= sqrt_num; i += 2)	
	{
		if(num % i == 0)
		{
			return false;
		}
	}
	return true;
}


