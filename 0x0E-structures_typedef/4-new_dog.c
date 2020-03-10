#include "dog.h"
/**
 *new_dog -new struct
 *@name: pointer char
 *@age: float.
 *@owner: pointer to structure.
 *Return: new_dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	if (name == NULL)
	{
		return (NULL);
	}
	if (owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
		{
		free(new_dog->name);
		free(new_dog);
		}
	return (new_dog);
}

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
	n++;
	pt = malloc(sizeof(char) * n);

	if (pt == NULL)
		return (NULL);

	for (l = 0; l <  n; l++)
	{
		pt[l] = str[l];
	}
	return (pt);
}
