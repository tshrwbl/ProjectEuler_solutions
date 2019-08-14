#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 * 99.
//Find the largest palindrome made from the product of two 3-digit numbers.

bool IsPalindrome(int num);

int main(void)
{
	//biggsest pal.
	int bigPal[] = {0,0,0};
	//iterating over all 3 digit number
	for (int i = 999; i > 99; i--)
	{
		for (int j = 999; j > 99; j--)
		{
			if (IsPalindrome(i * j))
			{
				if ((i * j) > bigPal[0])
				{
					bigPal[0] = i * j;
					bigPal[1] = i;
					bigPal[2] = j;
				}
			}
		}
	}
	
	printf("%i * %i = %i \n", bigPal[1], bigPal[2], bigPal[0]);
}

bool IsPalindrome(int num)
{
	//length ln
	//narr array contains all digits in number
	int ln = (int) floor(log10((double) num) + 1);
	int narr[ln];
	for (int i = 0; i < ln; i++)
	{
		int power = round(pow(10.0 , ((double) ln) - 1 - i));
		narr[i] = num / power;
		num -= narr[i] * power;
	}
	
	//check for the match
	int match = 0;
	for (int j = 0; j < ln; j++)
	{
		if (narr[j] == narr[ln - 1 - j])
		{
			match++;
		}
	}
	
	//return true or false
	if (match == ln)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

