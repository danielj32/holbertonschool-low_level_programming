#include "holberton.h"
/**
 ** _strspn - length of a prefix substring.
 *@s: pointer char
 *@accept: 2 char.
 *Return: a value
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0'  &&  _strchr(accept, *s++))
		i++;
	return (i);
}

/**
 *_strchr - locates a character in a string.
 *@s: pointer of the string.
 *@c: char datatype.
 *Return: null first occurrence of c or NULL.
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
		if (!*s++)
			return (0);
	return (s);
}
