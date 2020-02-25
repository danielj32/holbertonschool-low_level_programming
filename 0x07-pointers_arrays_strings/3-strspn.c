#include "holberton.h"
/**
 ** _strspn - length of a prefix substring.
 *@s: pointer char
 *@accept: 2 char.
 *Return: a value
 */

unsigned int _strspn(char *s, char *accept)
{
	int k, m;
	unsigned int cont = 0;

	for (k = 0; (s[k] != ' ' && s[k] != '\0'); k++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[k] == accept[m])
			{
				cont++;
			}
		}
	}
	return (cont);
}
