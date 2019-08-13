#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.

bool IsPalindrome(int num);

int main(void)
{
	//iterating over all 3 digit number
	for (int i = 999; i > 99; i--)
	{
		for (int j = 999; j > 99; j--)
		{
			if (IsPalindrome(i*j))
			{
				printf("%i * %i = %i \n", i, j, i*j);
			}
		}
	}
}

bool IsPalindrome(int num)
{
	//Divide number in two halfs
	//len is nuber of digit or length
	int firstHalf;
	int secondHalf;
	int len = (int) floor(1 + log10((double) num));
	double lenHalf = floor((double) len / 2);
	
	//creating firsthalf and secondhalf
	//ignore middle digit for odd number len, eg 12345
	//halfs		odd 	even
	//fh        12xxx 	12xx
	//sc 		xxx45	xx34
	if (len % 2 == 1)
	{
		firstHalf = num / (int) pow(10.0 , lenHalf + 1.0);
		secondHalf = num - (int)(((double)num / pow(10.0, lenHalf + 1.0)) * pow(10.0, lenHalf + 1.0));
	}
	else
	{
		firstHalf = num / (int)pow(10.0, lenHalf);
		secondHalf = num - (firstHalf * (int) pow(10.0, lenHalf));
	}
	
	//reverse the secondHalf
	int reverseSc = 0;
	for (int i = 0; i < (int)lenHalf; i++)
	{
		reverseSc += (secondHalf / (int)pow(10.0 , lenHalf - 1.0 - i)) * ((int)pow(10.0 , i));
	}
	
	//final check of both half
	if (firstHalf == reverseSc)
	{
		//printf("%i + %i len %i, lh %fd \n", firstHalf, reverseSc , len , lenHalf);
		return true;
	}
	else
	{
		return false;
	}
}

