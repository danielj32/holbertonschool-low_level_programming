#include "search_algos.h"
/**
 * print_my_array - print the array in one loop
 *@array: pointer to 1 element
 *@low: low number of elements
 *@maxim: maxim num of elements
 */

void print_my_array(int *array, int low, int maxim)
{
	int iter;

	for (iter = low; iter < maxim; iter++)
	{
		printf("%d, ", array[iter]);
	}
	printf("%d\n", array[iter]);
}


/**
 * binary_search - search for a value sorted array
 *@array: pointer to 1 element
 *@size: number of elements
 *@value: values search for
 * Return: index where val is located
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int max = (int)size - 1;
	int mid = 0;

	while (low <= max)
	{
		printf("Searching in array: ");
		print_my_array(array, low, max);
		mid = (low + max) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			max = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
