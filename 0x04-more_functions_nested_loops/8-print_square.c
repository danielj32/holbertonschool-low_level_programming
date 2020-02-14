#include "holberton.h"
/**
 * print_square - check the code for Holberton School students.
 *@size: size
 */

void print_square(int size)
{
	int col;
	int flow = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (flow > 0)
	{
		col = size;
		while (col > 0)
		{
			_putchar('#');
			col--;
		}
		flow--;
		_putchar('\n');
	}
}
