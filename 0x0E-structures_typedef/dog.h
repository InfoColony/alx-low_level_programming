#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A structure for dog
 * @name: A member of the struct dog
 * @age: A struct dog member
 * @owner: A struct member
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
