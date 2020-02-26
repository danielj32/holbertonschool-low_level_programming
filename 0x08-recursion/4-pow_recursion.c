#include "holberton.h"
/**
 *_pow_recursion - prints a string, in reverse.
 *@x: integer 1
 *@y: integer 2
 *Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)

		return (-1);

	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
