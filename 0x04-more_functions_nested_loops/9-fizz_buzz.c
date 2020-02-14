#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	int fiz;

	for (fiz = 1; fiz <= 100; fiz++)
	{
		if (fiz % 3 == 0 && fiz % 5 != 0)
		{
			printf("Fizz");
		}
		else if (fiz % 5 == 0 && fiz % 3 != 0)
		{
			printf("Buzz");
		}
		else if (fiz % 3 == 0 && fiz % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
			printf("%d", fiz);
		if (fiz != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
