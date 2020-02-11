#include "holberton.h"
/**
 *_islower - print the lowercase character.
 *@c: integer
 *Return: 1 or 0
 */
int _islower(int c)
{

	if (c > 'a' || c > 'z')
		return (1);
	else
		return (0);
}

