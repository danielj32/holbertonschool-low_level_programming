#include <stdio.h>

/**
 * main - print comb
 *
 * Return: Always 0
 */
int main(void)
{
	int f = 48;

	while (f < 58)
	{
	putchar(f);
	if (f !=  57)
	{
	putchar(44);
	putchar(32);
	f++;
	}
	else
	{
	f++;
	}
	}

putchar('\n');
	return (0);
}
