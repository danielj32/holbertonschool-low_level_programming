#include "holberton.h"
/**
 *times_table - check the code for Holberton School students.
 *@void: null
 */

void times_table(void)
{
int r = 0;
int q;
int v;
int z = 0;

	while (r < 10)
	{
	q = 0;

		while (q < 10)
		{
		v = r * q;

			if (z > 9)
			{
			_putchar(v / 10 + '0');
			_putchar(v % 10 + '0');
			}
				else if (q != 0)
				{
				_putchar(' ');
				_putchar('0' + v);
				}
					else
					{
					_putchar(v + '0');
					}
		else if (q != 9)
		{
		_putchar(',');
		_putchar(' ');
		}
q++;
	}
_putchar('\n');
r++;
	}
}
