#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *main - function principal
 *@argc: number arguments passed into it
 *@argv: string
 *Return : 0
 *Return: 1
 */

int main(int argc, char *argv[])
{
	int i;
	int ad = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (str_digit(argv[i]))
			{
				ad = ad + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", ad);
	}
	return (0);
}

/**
 *str_digit - if is digit or not
 *@s: pointer string
 *Return: p.
 */

int str_digit(char *s)
{
	int j;
	int p = 1;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (!((s[j] >= 48) && (s[j] <= 57)))
		{
			p = p * 0;
		}
	}
	return (p);
}

