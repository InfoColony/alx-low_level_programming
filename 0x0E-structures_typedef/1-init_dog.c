#include "dog.h"

/**
 * init_dog - A void function
 * @name: An input
 * @age: An input
 * @owner: An input
 * @d: an input
 */
int len(char *);

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int j = len(name);
	d->name = malloc(j + 1);
	d->name = name;
	d->age = age;
	j=len(owner);
	d->owner = malloc(j + 1);
	d->owner = owner;
}


int len(char *s)
{
	int i = 0;
	char *p = s;

	
	while (*p != '\0')
	{
		i++;
		p++;
	}
	return (i);
}
