#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		(d->name == NULL) ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
		printf("Age: %.1f\n", d->age);
		(d->owner == NULL) ? printf("Owner: (nil)") : printf("Owner: %s\n", d->Owner);
	}
}
