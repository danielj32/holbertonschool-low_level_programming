#ifndef DOG_H
#define DOG_H

/**
 *struct dog - name of structure
 *@name: var name
 *@age: float
 *@owner: char
 *my_dog - alias
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
