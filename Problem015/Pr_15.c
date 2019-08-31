#include<stdio.h>

//TO DO Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner. How many such routes are there through a 20×20 grid?
const int rows = 21;

int main(void)
{
	//make initial grid
	int grid[rows][rows]; // rows num x colum num
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			grid[i][j] = 0;
		}
	} 
	for (int i = 0; i < rows; i++)
	{
		grid[i][0] = 1;
	}
	
	int iterator = rows / 2;
	if (rows % 2 == 1)
	{
		iterator++;
	}
	
	unsigned long long int paths = 1;
	//Diagonally symetric elements
	for (int i = 1; i < iterator; i++)
	{
		int sum = 2;
		for (int j = 1; j < (rows - i - 1); j++)
		{
			grid[i][j] = grid[i][j - 1] + grid[i - 1][j];
			sum += grid[i][j];
		}
		for (int k = 1; k <= i - 1; k++)
		{
			sum += grid[i][rows - i - 1 - k];
		}
		grid[i][rows - i - 1] = sum;
		paths = 2 * sum * sum;
	}
	
	if (rows % 2 == 0)
	{
		paths -= grid[rows / 2][rows / 2];
	}
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			printf("%i ", grid[i][j]);
		}
		printf("\n");
	} 
	
	printf("%ld ", paths);
}

