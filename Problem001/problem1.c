#include<stdio.h>
#include<math.h>

//Done
//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

void main(void) 
{
    int num, add = 0;
    for (num = 0; num < 1000; num++)
    {
        if (num % 3 == 0)
        {
            add += num;
        }
        if (num % 5 == 0)
        {
            add += num;
        }
        if (num % 15 == 0)
        {
            add -= num;
        }
    }
    printf("addtion = %i\n", add);
}
