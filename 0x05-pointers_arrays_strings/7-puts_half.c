#include "holberton.h"
/**
 *puts_half - prints half of a string
 *@str: pointer to string
 */
void puts_half(char *str)
{
	int g, y, a;

		for (g = 0; str[g] != '\0'; g++)
		{

		}
		if (g % 2 != 0)
		{
			a = (g + 1) / 2;
		}
		else
		{
			a = g / 2;
		}
		for (y = a; y < g; y++)
		{
		{
			_putchar(str[y]);
		}
		}
		_putchar(10);
}

