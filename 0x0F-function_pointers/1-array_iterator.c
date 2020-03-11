#include "function_pointers.h"
/**
 *array_iterator - iter array
 *@array: pointer 1
 *@size: size of array
 *@action: pointer function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array && size)
	for (i = 0; i < size; i++)
	action(array[i]);
}
