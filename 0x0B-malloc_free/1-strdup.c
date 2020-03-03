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

	if (str == NULL)
		return (NULL);

	for (n = 0; str[n];  n++)
	{

	}
	pt = malloc(sizeof(char) * n);
	n++;
	if (pt == NULL)
		return (NULL);
	for (l = 0; l < n; l++)
	{
		pt[l] = str[l];
	}
	return (pt);
}
