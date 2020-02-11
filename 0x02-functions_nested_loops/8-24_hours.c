#include "holberton.h"
/**
 *jack_bauer - print the lowercase character.
 *@void: null
 */
void jack_bauer(void)
{
	int tm1;
	int tm2;
	int tm3;
	int tm4;

	for (tm1 = '0'; tm1 <= '2'; tm1++)
	{
		for (tm2 = '0'; tm2 <= '3'; tm2++)
		{

			for (tm3 = '0'; tm3 <= '5'; tm3++)
			{
				for (tm4 = '0'; tm4 <= '9'; tm4++)
				{
					putchar(tm1);
					putchar(tm2);
					putchar(':');
					putchar(tm3);
					putchar(tm4);
					putchar('\n');

				}
			}

		}

	}
}
