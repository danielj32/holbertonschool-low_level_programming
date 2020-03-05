#include "holberton.h"
/**
 *_calloc - function allocates memory
 *@nmemb: num of elementes
 *@size: size of elements
 *Return: pt.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

char *pt;

unsigned int ct;

if (nmemb == 0)
	return (NULL);

if (size == 0)
	return (NULL);

pt = malloc(nmemb * size);

if (pt == NULL)
{
	free(pt);
	return (NULL);
}

for (ct = 0; ct < nmemb * size; ct++)
	pt[ct] = 0;

return (pt);
}
