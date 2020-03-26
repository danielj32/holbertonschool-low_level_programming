#include "holberton.h"
/**
 * clear_bit - set of a bit to 0 a given index.
 *@n: unsigned long integer pointer
 *@index: unsigned integer
 * Return:1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if ((sizeof(unsigned long int) * 8) - 1 < index)
		return (-1);

	i <<= index;
	*n &= ~i;

	return (1);
}

