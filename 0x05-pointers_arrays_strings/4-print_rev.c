#include "holberton.h"
/**
  *print_rev - prints a string, in reverse, followed by a new line.
  *@s: pointer to the string.
 */

void print_rev(char *s)
{
	int ct = 0;

	while (*s != '\0')
	{
		s++;
		ct++;
	}
	while (ct > 0)
	{
		ct--;
		s--;
		_putchar(*s);
	}
	_putchar(10);
}




