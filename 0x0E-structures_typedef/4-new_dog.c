#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - initializes a struct dog
 * @name: first element of variable d
 * @age: second element of variable d
 * @owner: element of variable d
 *
 * Return: void NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
