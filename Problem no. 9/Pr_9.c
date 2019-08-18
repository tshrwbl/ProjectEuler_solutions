#include<stdio.h>
#include<stdbool.h>

//TO DO
//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.
//
//1st known triad 3, 4, 5 add-up to 12
//2nd known triad 5, 12, 13 add-up to 30
//3rd known triad 8, 15, 12 add-up to 40 which can divide 1000 giving 25
//8 * 25 , 15 * 25, 12 * 25 add up to 1000 and is a triad.

int main() 
{
	int numa = 3;
	int numb;
	int numc;
	int c;
	
	while(true)
	{
		numb = ((numa * numa) - 1 ) / 2;
		numc = ((numa * numa) + 1 ) / 2;
		
		if (1000 % (numa + numb + numc) == 0)
		{
			c = 1000 / (numa + numb + numc);
			printf("%i %i %i", c * numa, c * numb, c * numc);
			break;
		}
		
		//printf("%i %i %i \n", c * numa, c * numb, c * numc);
		numa++;
		
		numb = ((numa / 2) * (numa / 2)) - 1 ;
	 	numc = ((numa / 2) * (numa / 2)) + 1 ;	
		
		
		if (1000 % (numa + numb + numc) == 0)
		{
			c = 1000 / (numa + numb + numc);	
			printf("%i %i %i", c * numa, c * numb, c * numc);
			break;
		}
		
		//printf("%i %i %i \n", c * numa, c * numb, c * numc);
		numa++;
	}
}
