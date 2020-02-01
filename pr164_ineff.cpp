#include <stdio.h>
void print_arr(short *arr, int n);
void next_num(short *arr);
int check_sum(short *arr);

int main(void)
{
	short arr[20];
	arr[0] = 1;
	for(int i = 1; i < 20; i++)
		arr[i] = 0;
	
	unsigned long long int answer = 0;
	while(arr[0] != 10)
	{
		//print_arr(arr, 20);
		if(check_sum(arr))
			printf("\t%i ", ++answer);
		next_num(arr);
	}
}

void print_arr(short *arr, int n)
{
	printf("\n");
	for(int i = 0; i < n; i++)
		printf("%i",arr[i]);
}

void next_num(short *arr)
{
	arr[19] += 1;
	for(int i = 19; i > 0; i--)
		if(arr[i] > 9)
		{
			arr[i] = 0;
			arr[i - 1] += 1;
		}
}

int check_sum(short *arr)
{
	for(int i = 0; i < 18; i++)
	{
		if(arr[i] + arr[i + 1] + arr[i + 2] > 9)
			return 0;
	}
	return 1;
}
