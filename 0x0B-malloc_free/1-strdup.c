#include "holberton.h"
/**
 *_strdup - returns a pointer to a newly.
 *@str: string pointer
 *Return: pt
 */

char *_strdup(char *str)
{
	int n, l;
	char *pt;

	for (n = 0; str[n];  n++)
	{
		if (str == NULL)
			return (NULL);
	}
	pt = malloc(sizeof(char) * n);
	n++;

	for (l = 0; l < n; l++)
	{
		pt[l] = str[l];

		if (pt == NULL)
			return (NULL);
	}
	return (pt);
	free(pt);
}
