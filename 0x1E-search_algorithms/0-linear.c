#include "search_algos.h"
/**
 * linear_search - search in array one in one
 *@array: pointer to 1 element
 *@size: number of elements
 *@value: values search for
 * Return: index where val is located
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int long ct1;

	if (array == NULL || size == 0)
		return (-1);

	for (ct1 = 0; ct1  < size; ct1++)
	{
		printf("Value checked array[%lu] = [%d]\n", ct1, array[ct1]);
		if (array[ct1] == value)
			return (ct1);
	}
	return (-1);
}
