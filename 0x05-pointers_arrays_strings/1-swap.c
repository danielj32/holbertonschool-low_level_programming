#include "holberton.h"
/**
  *swap_int - swaps the values of two integers.
  *@a: pointer 1
  *@b: pointer 2
  */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*b = *a;
	*a = tmp;
}
