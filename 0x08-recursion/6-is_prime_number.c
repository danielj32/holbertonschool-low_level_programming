#include "holberton.h"
/**
 *prod - fucntion.
 *@n: integer 1
 *@x: integer 2
 *Return: prod
 */

int prod(int n, int x)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == x)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	else
		return (prod(n, x + 1));
}
/**
  *is_prime_number - prime numbers
  *@n: integer
  *Return: prod
  */

int is_prime_number(int n)
{
	return (prod(n, 2));
}

