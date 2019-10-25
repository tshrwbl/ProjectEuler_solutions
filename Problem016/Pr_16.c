#include<stdio.h>
#include<math.h>

//TO DO
/* 
215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 21000?
*/

int main (void)
{
	//setup for the 1000 digit number
	unsigned long long int power_data[20];
	power_data[19] = 2;
	for (int i = 0; i < 19; i++)
	{
		power_data[i] = 0;
	}
	
	int carry_on = 0;
	for (int j = 1; j < 1000; j++)
	{	
		for (int i = 19; i >= 0; i--)
		{
			power_data[i] *= 2;
			
			//cut the 18th digit
			if (i != 19)
			{
				carry_on = power_data[i + 1] / (unsigned long long int) pow(10, 18);
				power_data[i + 1] -= carry_on * (unsigned long long int) pow(10, 18);
				power_data[i] += carry_on;
			}
			//printf("%i, %i , %i, %lld \n", j + 1, i, carry_on, power_data[i]);
		}
		//printf("____xxx____\n");
	}
	
	for (int i = 0; i < 19; i++)
	{
		printf("%lld , %i \n", power_data[i], i);
	}
	
	int answer = 0;
	int unit_place;
	for (int i = 0; i < 20; i++)
	{
		for (int digi = 19; digi > 0; digi--)
		{
			unit_place = power_data[i] / (unsigned long long int) pow(10, digi);
			power_data[i] -= unit_place * (unsigned long long int) pow(10, digi);
			answer += unit_place;
			printf("%i, %lld, %i, %i \n", i, power_data[i], unit_place, answer);
		}
	}
	printf("%i ", answer);
}
