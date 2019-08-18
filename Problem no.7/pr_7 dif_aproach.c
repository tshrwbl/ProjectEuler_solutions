
// What is the 10001st prime number?
#include <stdio.h>
#include <math.h>

const int PRIMES = 10001;

int main(void)
{
	//arr - array container for 10001 prime numbers
	int arr[PRIMES];
	arr[0] = 2;
	arr[PRIMES] = 0;
	
	//started checking from 5
	int num = 3;
	
	//current number of prime found
	int currentlen = 1;
	
	//act like a switch for prime number
	int prime = 1;
	
	while(arr[PRIMES] == 0)
	{
		//int sqnum = round(sqrt((double) num));
		//for every prime is in arr
		//check for divisibility
		for (int i = 0; i < currentlen ; i++)
		{
			//printf("checking %i mod %i \n", num, arr[i]);
			if (num % arr[i] == 0)
			{
				prime = 0;
			}
		}
		//printf("got to prime %i carr %i \n", prime , arr[currentlen]);
		//if it is prime add to array
		//increment number by 2
		if(prime == 1) 
		{
			arr[currentlen] = num;
			currentlen++;
			//printf("got to prime %i carr %i \n", prime , arr[currentlen]);
		}
		
		num += 2;
		prime = 1;
	}
	
	//print all primes
	for (int i = 0; i < PRIMES; i++){printf("%i ", arr[i]);}
	//printf("%i ", arr[PRIMES - 1]);
}

