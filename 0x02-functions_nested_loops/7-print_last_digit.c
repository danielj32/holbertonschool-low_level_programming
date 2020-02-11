#include "holberton.h"
/**
 *print_last_digit - print last digit.
 *@j: null
 *
 *Return: j or 0
 */

int print_last_digit(int j)
{
	j = j % 10;

	if (j < 0)
	{
		j = -(j);
	}

	_putchar('0' + j);

return (j);
}
