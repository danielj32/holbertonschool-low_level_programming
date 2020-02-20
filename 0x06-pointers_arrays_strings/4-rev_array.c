#include "holberton.h"
/**
  *reverse_array - that reverses the content of an array of integers
  *@n: number of the elements
  *@a: pointer.
  *Return: n
  */


void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n; i++, n--)
	{
		b = a[i];
		a[i] = a[n - 1];
		a[n - 1] = b;
	}


}
