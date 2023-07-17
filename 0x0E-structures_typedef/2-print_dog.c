#include "dog.h"
#include <stdio.h>
#define FL 0.00001

void print_dog(struct dog *d)
{
	char *s = "(nil)";
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name != NULL) ? d->name : s);
	(d->age < FL) ? printf("Age: %s\n", s) : printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : s);
}
