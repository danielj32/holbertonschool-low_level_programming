#include "holberton.h"
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
