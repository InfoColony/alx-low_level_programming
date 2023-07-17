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
	d->name = malloc(sizeof(name));
	d->name = name;
	d->age = malloc(sizeof(age));
	d->age = age;
	d->owner = malloc(sizeof(owner));
	d->owner = owner;
	return;
}
