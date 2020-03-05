#include "holberton.h"
/**
 *malloc_checked - allocates memory.
 *@b: unsigned int b.
 *Return: pointer to the b.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *pt = NULL;

	pt = malloc(b);

	if (pt == NULL)
	{
		exit(98);
	}
	return (pt);
}
