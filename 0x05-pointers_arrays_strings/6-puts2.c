#include "holberton.h"
/**
  *puts2 - prints every other character of a string.
  *@str: string
  *Return: ct
  */
int _strlen(char *str);

void puts2(char *str)
{
	int ct;

		for (ct = 0; ct < _strlen(str); ct += 2)
		{
			_putchar(str[ct]);
		}
		_putchar(10);

}

/**
 *_strlen - length of a string.
 *@str: pointer.
 *
 *Return: ct.
 */


int _strlen(char *str)
{
	int ct = 0;

	while (*str != '\0')
	{
		ct++;
		str++;
	}
	return (ct);
}

