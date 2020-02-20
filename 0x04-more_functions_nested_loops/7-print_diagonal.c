#include "holberton.h"
/**
*print_diagonal - prints  diagonal line 
*@n: null
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i =0; i <= n; i++)
		{
		for (j = 0; j <= n; j++)
		{
			if(i==1 || i==n || j==1 || j==n || i==j || j==(n - i + 2))
			{
				putchar(' ');
				putchar(92);
			}
			else
			{
				putchar('\n');
			}
		}

		}
	}
	
}

