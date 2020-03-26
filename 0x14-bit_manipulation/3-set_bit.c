#include "holberton.h"
/**
 * set_bit - set of a bit to 1 a given index.
 *@n: unsigned long integer pointer
 *@index: unsigned integer
 * Return:1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if ((sizeof(unsigned long int) * 8) - 1 < index)
		return (-1);

	i <<= index;
	*n = *n | i;

	return (1);
}

