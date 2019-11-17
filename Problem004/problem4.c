#include <stdio.h>
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
	int reverse = 0 , rem, checker = num;
	while(num > 0)
	{
		rem = num % 10;
		reverse = (reverse * 10) + rem;
		num /= 10;
	}	
	//check for the match
	if(reverse == checker)
	{
		return true;
	}
	else
	{
		return false;
	}
}

