#include "holberton.h"
/**
 *create_array - function that creates an array of chars
 *@size: size of the array
 *@c: char of the arrays
 *Return: to the pointer.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *st;

	st = malloc(size * sizeof(c));

	for (k = 0; k < size; k++)
	{
		if (st == NULL)
		{
			return (NULL);
		}
			st[k] = c;
	}
	if (size == 0)
	{
		return (NULL);
	}
		return (st);
		free(st);
}
