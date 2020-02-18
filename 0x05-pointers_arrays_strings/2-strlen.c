#include "holberton.h"
/**
  *_strlen - length of a string.
  *@s: pointer.
  *Return: ct.
  */

int _strlen(char *s)
{
	int ct = 0;

	while (*s != '\0')
	{
		ct++;
		s++;
	}
	return (ct);
}
