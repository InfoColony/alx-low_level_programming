#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - A void function
 * @name: An input
 * @age: An input
 * @owner: An input
 * @d: an input
 */
int len(char *);
void stc(char *,char *);
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int j = len(name);
	d->name = malloc(j + 1);
	stc(d->name,name);
	d->age = age;
	j=len(owner);
	d->owner = malloc(j + 1);
	stc(d->owner,owner);
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

void stc(char *s1, char *s2)
{
	char *c = s2;
	int li = 0;
	while(*c != '\0')
	{
		s1[li] = *c;
		c++;
		li++;
	}
	s1[li] = '\0';
}
