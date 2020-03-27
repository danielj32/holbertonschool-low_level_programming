#include "holberton.h"
/**
 * flip_bits - check the code for Holberton School students.
 *@n: num of bits
 *@m: second num of bits
 * Return: count.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int ct;

	x = n ^ m;

	for (ct = 0; x; x >>= 1)
	{
		if (x & 1)
		{
			ct++;
		}
	}
	return (ct);
}
