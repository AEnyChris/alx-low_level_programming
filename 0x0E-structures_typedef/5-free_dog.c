#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free struct dog pointers
 * @d: struct type dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if(d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
