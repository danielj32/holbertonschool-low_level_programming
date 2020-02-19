#include "holberton.h"
/**
  *puts2 - prints every other character of a string.
  *@str: string
  *Return: ct
  */
int _strlen(char *str);
void puts2(char *str);

void puts2(char *str)
{
	int ct;
	char s[64] = " ";

		for (ct = 0; ct < _strlen(str); ct += 2)
		{
			if (ct % 2 == '\0')
			{
				_putchar(s[10]);
				_putchar(str[ct]);
				s[ct / 2] = str[ct];
			}
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

