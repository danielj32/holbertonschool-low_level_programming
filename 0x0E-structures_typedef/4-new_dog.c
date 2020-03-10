#include "dog.h"
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
	pt[l] = '\n';
        return (pt);
}

/**
 *new_dog -new struct
 *@name: pointer char
 *@age: float.
 *@owner: pointer to structure.
 *Return: new_dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *nam, *own;
	
	nam = _strdup(name);
	if (!nam)
		return (NULL);
	own = _strdup(owner);
	if (!own)
	{
		free(nam);
		return(NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
	{
		free(nam);
		free(own);
		return (NULL);
	}
	new_dog->name = nam;
	new_dog->age = age;
	new_dog->owner = own;
	return (new_dog);
}


