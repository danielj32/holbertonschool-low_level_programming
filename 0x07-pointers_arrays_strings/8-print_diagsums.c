#include "holberton.h"
/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix
 *@a: pointer integer
 *@size: size of array.
 */

void print_diagsums(int *a, int size)
{
	int suma1, suma2, x, maxim;
x = suma1 = suma2 = 0;
	maxim = size * size;

	while (x < maxim)
	{
		suma1 += a[x];
		x = x + size + 1;
	}
	x = size - 1;
	while (x < (maxim - 1))
	{
		suma2 += a[x];
		x = x + (size - 1);
	}
	printf("%d, %d\n", suma1, suma2);
}
