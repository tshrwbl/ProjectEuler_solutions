//problem
// What is the 10001st prime number?

#include <stdio.h>

int main(void)
{
	//arr - array container for 10001 prime numbers
	int arr[10000];
	arr[0] = 2;
	arr[1] = 3;
	arr[10000] = 0;
	
	//started checking from 5
	int num = 5;
	
	//current number of prime found
	int currentlen = 2;
	
	//act like a switch for prime number
	int prime = 0;
	
	while(arr[10000] == 0)
	{
		//for every prime is in arr
		//check for divisibility
		for (int i = 0; i < currentlen; i++)
		{
			if (num % arr[i] != 0)
			{
				prime = 1;
			}
		}
		
		//if it is prime add to array
		//increment number by 2
		if(prime == 0) 
		{
			arr[currentlen] = num;
			currentlen++;
		}
		
		num += 2;
		prime = 0;
	}
	
	//print all primes
	for (int i = 0; i < 10000; i++)	
	{
		printf("%i \n", arr[i]);
	}
}
