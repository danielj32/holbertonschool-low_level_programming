#include "holberton.h"
/**
 *_realloc - reallocates a memory block using malloc free
 *@ptr: pointer
 *@old_size: old size
 *@new_size: new size.
 *Return: ptr.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size || ptr == NULL)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
