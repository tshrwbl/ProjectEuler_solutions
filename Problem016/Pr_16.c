//TO DO
/* 
215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 21000?
*/

#include<stdio.h>

unsigned long long int power(int num, int rest_to);

int main(void)
{
	//setup to store the 400 digit number - 20 array of 20 digits numbers
	unsigned long long int power_data[20];
	power_data[19] = 2;
	for(int i = 0; i < 19; i++)
	{
		power_data[i] = 0;
	}
	
	//Iterate 2 to the power of 1000
	int carry_on = 0;
	for(int j = 1; j < 1000; j++)
	{	
		for(int i = 19; i >= 0; i--)
		{
			power_data[i] *= 2;
			//cut the 18th digit
			if(i != 19)
			{
				carry_on = power_data[i + 1] / power(10, 18);
				unsigned long long int place_value_carry_on = carry_on * power(10, 18);
				power_data[i + 1] -= place_value_carry_on;	
				power_data[i] += carry_on;
			}
		}
	}
	printf("2 to the power of 1000 = \n");
	for(int i = 0; i < 20; i++)
	{
		printf("%lld",power_data[i]);
	}
	
	//Add all the digits of the nubmer	
	int answer = 0;
	for(int i = 0; i < 20; i++)
	{
		while(power_data[i] != 0)
		{
			answer += power_data[i] % 10;
			power_data[i] /= 10;
		}
	}
	
	//print the result
	printf("\n\n sum of all its digits = %i ", answer);
}

unsigned long long int power(int num, int rest_to)
{
	unsigned long long int answer = num;
	for(int i = 1; i < rest_to; i++)
	{
		answer *= num;
	}
	return answer;
}
