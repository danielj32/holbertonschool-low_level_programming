#include "holberton.h"
/**
 * get_bit - value of a bit a given index.
 *@n: unsigned long integer
 *@index: unsigned integer
 * Return: j & 1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	i = n >> index;

	return (i & 1);
}

