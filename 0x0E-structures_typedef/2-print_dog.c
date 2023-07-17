#include "dog.h"
#include <stdio.h>


void print_dog(struct dog *d)
{
	char *s = "(nil)";
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name != NULL) ? d->name : s);
	printf("Age: %f\n", (d->age != NULL) ? d->age : s);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : s);
}
