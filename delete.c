#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	scanf("%i", &n);
	
	if (n == 0)
	{
		printf("0");
		return 0;
	}
	
	double ans = 0;
	double temp;
	
	int len = floor(log10((double)n) + 1);
	for (int i = 0; i < len; i++)
	{
		temp = (double)n / (pow(10.0, len - 1 - i));
		ans += temp * (pow(10.0, i));
		
		printf("%fd %fd %i %i \n", (pow(10.0, 5.0)), (pow(10.0, 3.0)), temp, ans);

	}
	printf("%i", ans);
}
