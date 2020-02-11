#include "holberton.h"
/**
 *print_alphabet - print the alphabet.
 *@void: null
 */

void print_alphabet(void)
{

	char p;

	for (p = 'a'; p <= 'z'; ++p)

		_putchar(p);
	_putchar('\n');
}
