#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	char *s = "(nil)";
	char *n = NULL;
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != n) ? d->name : s);
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", (d->owner != n) ? d->owner : s);
	}
}
