#include "holberton.h"
/**
 *factorial - prints a string, in reverse.
 *@n: pointer to the string.
 *Return:
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
