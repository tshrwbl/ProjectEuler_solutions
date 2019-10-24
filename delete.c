#include<stdio.h>
#define MAX 2
int main(void)
{
	printf("Take any number in mind from 1 to 100 \n");	
	char userInput;
	int ans = 0;
	
	for(int i = 2; i <= 64; i *= 2)
	{
		printf("Is it in this table? Y or N \n");
		makeTable(i);
		fgets(userInput, MAX, stdin);
		if(userInput == "Y")
		{
			ans += i;
		}
	}
	printf("%i ",ans);
}

void makeTable(int startingNum)
{
	int checkPhase = 0;
	for(int i = startingNum; i < 100; i++)
	{
		if(i % startingNum == 0)
		{
			checkPhase++;
		}
		if(checkPhase % 2 == 1)
		{
			printf("%i ",i);
		}
	}
	printf("\n ");
}
