#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
		char j;
		int k;
		long l;
		long long int m;
		float r;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(r));
	return (0);
}
