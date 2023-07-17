#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - A void function
 * @name: An input
 * @age: An input
 * @owner: An input
 * @d: an input
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
	return;
}
