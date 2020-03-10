#include "dog.h"
/**
 *free_dog - free a dog
 *@d: dog to free
 *Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
