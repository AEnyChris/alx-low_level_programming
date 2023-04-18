#include "dog.h"

/**
 * init_dog - initializes a struct dog
 * @d: struct type called dog
 * @name: first element of variable d
 * @age: second element of variable d
 * @owner: element of variable d
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
