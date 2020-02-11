#include "holberton.h"
/**
 *_isalpha - print the lowercase or uppercase.
 *@c: integer
 *Return: 1 or the 0
 */

int _isalpha(int c)
{
	if (c > 'a' || c > 'z' || c > 'A' || c > 'Z')
		return (1);
	else
		return (0);
}
