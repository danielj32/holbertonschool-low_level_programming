#include <stdio.h>
/**
 *main - function principal
 *@ac: number arguments passed into it
 *@av: null
 *Return: 0
 */

int main(int ac, char *av[])
{

	int i;

	for (i = 0; i < ac; i++)
	printf("%s\n", av[i]);
	return (0);
}
