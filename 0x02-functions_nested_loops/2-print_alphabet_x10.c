#include "holberton.h"
/**
 *print_alphabet_x10 - print the alphabet.
 *@void: null
 */

void print_alphabet_x10(void)
{
	int j = 0;
	char ab;

	while (j < 10)
		{

	for (ab = 'a'; ab <= 'z'; ab++)
		{

		_putchar(ab);

		}
	putchar('\n');
	j++;
		}

}
