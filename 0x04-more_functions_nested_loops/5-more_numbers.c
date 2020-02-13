#include "holberton.h"
/**
  *more_numbers - prints the numbers, from 0 to 14
  *@void: null
  */
void more_numbers(void)
{
	int a;

	for (a = 0; a <= 14; a++)
	{
	if (a >= 10)
		_putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
	}
	_putchar('\n');
}
