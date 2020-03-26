#include "holberton.h"
/**
 * binary_to_uint - convert binary to unsigned int.
 *@b: is the string of numbers
 * Return: count unsigned.
 */

unsigned int binary_to_uint(const char *b)
{
	int ct = 0;
	unsigned int j = 0;

	if (b == NULL)
		return (0);

	for (; b[ct] != '\0';)
	{
		if (b[ct] < '0' || b[ct] > '1')
			return (0);
		j <<= 1;
		j += b[ct] - '0';
		ct++;
	}
	return (j);
}
