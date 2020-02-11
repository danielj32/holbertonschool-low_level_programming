#include "holberton.h"
/**
 *print_sign - print the lowercase or uppercase.
 *@n: integer
 *Return: 1 or the 0
 */

int print_sign(int n)
{

		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
	if (n == 0)
		{
		_putchar('0');
	return (0);
		}
		else if (n < 0)
		{
			putchar('-');
			return (-1);
		}
	return (n);
}

