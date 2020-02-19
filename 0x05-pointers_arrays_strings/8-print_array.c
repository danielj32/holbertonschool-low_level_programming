#include "holberton.h"
/**
  *print_array - print elements of an array of integers.
  *@a: pointer 1
  *@n: pointer 2.
  */

void print_array(int *a, int n)
{
	int cd;

	for (cd = 0; cd < n; cd++)
	{
		printf("%d", a[cd]);
		if (cd < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

