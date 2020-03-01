#include <stdio.h>
#include <stdlib.h>
/**
 *main - function principal
 *@ac: number arguments passed into it
 *@av: null
 *Return: 0
 */

int main(int ac, char *av[])
{
	int mul;

	if (ac == 3)
	{
		mul = atoi(av[1]) * atoi(av[2]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
