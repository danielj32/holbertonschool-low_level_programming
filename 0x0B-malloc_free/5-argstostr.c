#include "holberton.h"
/**
 **argstostr - concatenates all the arguments of your program
 *@ac: num  arguments
 *@av: pointer to arguments
 *Return: new pointer.
 */

char *argstostr(int ac, char **av)
{
	int ct1;
	int ct2;
	int len = 0;
	int i = 0;
	char *p;

	if (ac == 0)
	{
		return (NULL);
	}
	for (ct1 = 0; ct1 < ac; ct1++)
	{
		if (av[ct1] == NULL)
		{
			return (NULL);
		}
		for (ct2 = 0; av[ct1][ct2]; ct2++)
		{
			len++;
		}
	}
	p = malloc(sizeof(char) * (len + ac + 1));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (ct1 = 0; ct1 < ac; ct1++)
	{
		for (ct2 = 0; av[ct1][ct2]; ct2++)
		{
			p[i] = av[ct1][ct2];
			i++;
		}
		p[i] = '\n';
		i++;
	}
	return (p);
}

