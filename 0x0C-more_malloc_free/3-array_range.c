#include "holberton.h"
/**
 *array_range - range of array
 *@min: var min
 *@max: var max
 *Return: cont.
 */

int *array_range(int min, int max)
{
	int ct;
	int *cont;

	if (min > max)
		return (NULL);

	cont = malloc(sizeof(int) * (max - min + 1));
	if (cont == NULL)
		{
		free(cont);
		return (NULL);
		}
	for (ct = 0; min <= max; ct++, min++)
		cont[ct]  = min;

	return (cont);
}
