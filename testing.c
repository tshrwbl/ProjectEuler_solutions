#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main(void) {
	for(int j = 0; j < 10; j++)
	{
		printf("passed\n");
		for(int i = (j - 1); i >= 0; i--)
		{
			printf("%i %i \n", j, i);
		}
	}
    return 0;
}
