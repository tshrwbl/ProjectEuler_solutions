#include<stdio.h>
#include<math.h>

//TO DO
/* 
215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 21000?
*/
int main (void)
{
	unsigned long long int power_data[20];
	unsigned long long int power_2_to_50 = (unsigned long long int) pow(2, 50);
	
	for (int i = 0; i < 20; i++)
	{
		power_data[i] = power_2_to_50;
		printf("%lld , %i \n", power_data[i], i);
	}
}

// TO DO 
// Make a function for squaring the numbers

