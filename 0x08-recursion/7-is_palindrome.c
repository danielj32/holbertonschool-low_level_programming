#include "holberton.h"
/**
 *palindr - function.
 *@str: string
 *@o: integer 2
 *@c: integer 3
 *Return: 0
 */

int palindr(char *str, int o, int c)
{
	if (o == c)
		return (1);
	if (str[o] != str[c])
		return (0);
	if (o <= c + 1)
		return (palindr(str, o + 1, c - 1));
	return (1);
}

/**
 * _strlen_recursion - Is the prototype.
 * @s: Is the variable we are working with.
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(++s));
	}
	else
		return (0);
}

/**
 *is_palindrome - prints a string, in reverse.
 *@s: char pointer
 *Return: palindr
 */

int is_palindrome(char *s)
{
	int m = _strlen_recursion(s);

	if (m == 0)
		return (1);
	return (palindr(s, 0, m - 1));
}

