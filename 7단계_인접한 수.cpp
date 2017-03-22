#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int a[21][21];
	int column, row;
	scanf_s("%d %d", &column, &row);

	for (int j = 0; j < row; j++)
	{
		a[0][j] = 1;
	}


	for (int i = 1; i < column; i++)
	{
		a[i][0] = 1;
		for (int j = 1; j < row; j++)
		{
			a[i][j] = a[i-1][j - 1] + a[i-1][j];

		}
	}

	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
}

