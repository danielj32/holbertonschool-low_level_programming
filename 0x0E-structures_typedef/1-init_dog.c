#include "dog.h"
/**
  *init_dog - init structure
  *struct dog - structure
  *@d: pointer
  *@name: pointer 2
  *@age: float
  *@owner: char pointer
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
