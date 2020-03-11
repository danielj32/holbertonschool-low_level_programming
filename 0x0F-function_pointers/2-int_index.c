#include "function_pointers.h"
/**
 *int_index - search for an integer
 *@array: array integer
 *@size: size of array
 *@cmp: compare values.
 *Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
		for (j = 0; j < size; j++)
			if (cmp(array[j]))
				return (j);

	return (-1);

}
