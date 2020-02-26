#include "holberton.h"
/**
 *_strlen_recursion- length of a string.
 *@s: pointer.
 *Return: ct.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(++s));
	}
	else
	{
		return (0);
	}
}
