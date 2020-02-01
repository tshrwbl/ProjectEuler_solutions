#include <stdio.h>
#include <time.h>
void reg_test(void);
void mem_test(void);

int main(void)
{
	clock_t t;
	float avg = 0, temp;
	for(int loop = 0; loop < 10; loop++)
	{
		t = clock();
		reg_test();
		t = clock() - t;
		printf("REG No. of clicks %ld clicks (%.2f seconds).\n", t, ((float)t) / CLOCKS_PER_SEC); 
		avg += t;
	}
	printf("%.2f average by register \n", avg / 10);
	temp = avg;
	avg = 0;
	for(int loop = 0; loop < 10; loop++)
	{
		t = clock();
		mem_test();
		t = clock() - t;
		printf("\nMEM No. of clicks %ld clicks (%.2f seconds).", t, ((float)t) / CLOCKS_PER_SEC); 
		avg += t;
	}
	printf("\n %.2f average by memory, \n reg was %.2f percent faster \n", avg / 10, (avg - temp) / avg * 100);
}

void reg_test(void)
{
	for(register int i = -2147483648; i < 2147483647; i++);
}

void mem_test(void)
{
	for(auto int i = -2147483648; i < 2147483647; i++);
}

/*
output 

by long long interger 64bits
REG No. of clicks 2030 clicks (2.03 seconds).
REG No. of clicks 2023 clicks (2.02 seconds).
REG No. of clicks 2036 clicks (2.04 seconds).
REG No. of clicks 2013 clicks (2.01 seconds).
REG No. of clicks 2027 clicks (2.03 seconds).
REG No. of clicks 2000 clicks (2.00 seconds).
REG No. of clicks 2032 clicks (2.03 seconds).
REG No. of clicks 2022 clicks (2.02 seconds).
REG No. of clicks 2016 clicks (2.02 seconds).
REG No. of clicks 2014 clicks (2.01 seconds).
2021.30 average by register

MEM No. of clicks 8416 clicks (8.42 seconds).
MEM No. of clicks 8396 clicks (8.40 seconds).
MEM No. of clicks 8418 clicks (8.42 seconds).
MEM No. of clicks 8397 clicks (8.40 seconds).
MEM No. of clicks 8403 clicks (8.40 seconds).
MEM No. of clicks 8418 clicks (8.42 seconds).
MEM No. of clicks 8484 clicks (8.48 seconds).
MEM No. of clicks 8402 clicks (8.40 seconds).
MEM No. of clicks 8396 clicks (8.40 seconds).
MEM No. of clicks 8379 clicks (8.38 seconds).
 8410.90 average by memory,
 reg was 75.97 percent faster

by int 32bits
REG No. of clicks 1154 clicks (1.15 seconds).
REG No. of clicks 1138 clicks (1.14 seconds).
REG No. of clicks 1140 clicks (1.14 seconds).
REG No. of clicks 1127 clicks (1.13 seconds).
REG No. of clicks 1140 clicks (1.14 seconds).
REG No. of clicks 1130 clicks (1.13 seconds).
REG No. of clicks 1112 clicks (1.11 seconds).
REG No. of clicks 1138 clicks (1.14 seconds).
REG No. of clicks 1126 clicks (1.13 seconds).
REG No. of clicks 1128 clicks (1.13 seconds).
 1133.30 average by register

MEM No. of clicks 7970 clicks (7.97 seconds).
MEM No. of clicks 7930 clicks (7.93 seconds).
MEM No. of clicks 7901 clicks (7.90 seconds).
MEM No. of clicks 7910 clicks (7.91 seconds).
MEM No. of clicks 7885 clicks (7.88 seconds).
MEM No. of clicks 7900 clicks (7.90 seconds).
MEM No. of clicks 7888 clicks (7.89 seconds).
MEM No. of clicks 7907 clicks (7.91 seconds).
MEM No. of clicks 7913 clicks (7.91 seconds).
MEM No. of clicks 7907 clicks (7.91 seconds).
 7911.10 average by memory,
 reg was 85.67 percent faster

*/

