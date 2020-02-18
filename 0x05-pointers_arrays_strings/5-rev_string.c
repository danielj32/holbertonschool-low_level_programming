#include "holberton.h"
/**
  *rev_string - prints a string, in reverse, followed by a new line.
  *@s: pointer to the string.
 */

void rev_string(char *s)
{
	int length, c;
char *begin, *end, temp;
	length = _strlen(s);
	begin  = s;
	end = s;

	for (c = 0; c < length - 1; c++)
		end++;
	for (c = 0; c < length / 2; c++)
	{
		temp   = *end;
		*end   = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}

/**
 *_strlen - length of a string.
 *@s: pointer.
 *Return: ct.
 */

int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;
	return (c);
}
