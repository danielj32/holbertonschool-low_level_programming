#include "holberton.h"
/**
  *_strcmp - compares two strings.
  *@s1: pointer char 1.
  *@s2: pointer char 2.
  *Return: the values comparatives.
  */
int _strcmp(char *s1, char *s2)
{

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
