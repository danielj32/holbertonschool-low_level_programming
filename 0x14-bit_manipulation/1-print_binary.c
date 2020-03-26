#include "holberton.h"
/**
 * print_binary - check the code for Holberton School students.
 *@n: numbers of bytes
 */

void print_binary(unsigned long int n)
{
	unsigned long int j;
	int ct;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (j = n, ct = 0; (j >>= 1) > 0; ct++)
		;

	for (; ct >= 0; ct--)
	{
		if ((n >> ct) & 1)
			printf("1");
		else

			printf("0");
	}

}

