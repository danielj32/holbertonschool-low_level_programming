#include "holberton.h"
/**
  *string_toupper - changes all lowercase letters of a string to uppercase
  *@s: string
  *Return: s
 */

char *string_toupper(char *s)
{
	int ct = 0;

	while (s[ct] != '\0')
	{
	if (s[ct] >= 'a' && s[ct] <= 'z')
	{
		s[ct] = s[ct] - 32;
	}
	ct++;
	}
	return (s);
}
