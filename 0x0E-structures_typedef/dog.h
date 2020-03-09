#ifndef DOG_H
#define DOG_H

/**
 *struct dog - name of structure
 *@name: var name
 *@age: float
 *@owner: char
 *my_dog - alias
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
