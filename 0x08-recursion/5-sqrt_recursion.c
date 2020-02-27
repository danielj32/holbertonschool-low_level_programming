#include "holberton.h"
/**
 *in_producto - prints a string, in reverse.
 *@z: integer 1
 *@n: integer 2
 *Return: 0
 */

int in_producto(int z, int n)
{
	if (z > n)
	{
		return (-1);
	}
	if (z * z == n)
	{
		return (z);
	}
	z++;
	return (in_producto(z, n));
}

/**
 *_sqrt_recursion - prints a string, in reverse.
 *@n: integer 1
 *Return: 0
 */

int _sqrt_recursion(int n)
{
	int z = 2;

	if (n == 1)
	{
		return (1);
	}
	return (in_producto(z, n));
}
