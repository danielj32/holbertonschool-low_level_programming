#include "holberton.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: pointer char.
 *@accept: pointer two char
 *Return: pointer the byte in s.
 */

char *_strpbrk(char *s, char *accept)
{
	int o = 0;
	int k = 0;
	int y = 0;

	while ((s[o] != '\0') && (y == 0))
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[o] == accept[k])
			{
				return (&(s[o]));
				y = 1;
			}
		}
		o++;
	}
	return (0);
}
