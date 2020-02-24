#include "holberton.h"
/**
 ** _strspn - length of a prefix substring.
 *@s: pointer char
 *@accept: 2 char.
 *Return: a value
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j;
	unsigned int i;

	for (j = 0; s[j] != '\0'; j++)
		{
			for (i = 0; accept[i] != '\0'; i++)
				{
					accept [i] = s[j];
				}
		}
			return (accept);
}
