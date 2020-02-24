#include "holberton.h"
/**
 *_memset - is used to fill a block of memory with a particular value
 *@s: pointer
 *@b: char
 *@n: unsigned int.
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
