#include "holberton.h"
/**
 *print_chessboard - print the chessboard
 *@a: pointer
 */
void print_chessboard(char (*a)[8])
{
int x, z;
	x = 0;
	z = 0;

	while (x != 7 || z != 7)
	{
		_putchar(a[x][z]);
		if (z == 7)
		{
			_putchar('\n');
			z = 0;
			x++;
		}
		else
			z++;
	}
	_putchar(a[x][z]);
	_putchar(10);
}
