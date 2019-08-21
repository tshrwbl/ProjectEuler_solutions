#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main(void)
{
	char *s = "12345";
	int a = ((int)s[4] - 48) * 10;
	printf("%i ", a);
}
