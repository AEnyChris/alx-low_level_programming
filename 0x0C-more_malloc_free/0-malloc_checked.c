#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * malloc_checked - returns a pointer to a copied string
 * @b: size_t size of memory to be allocated
 *
 * Return: pointer to  allocated memory or exit(98)
 */

void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}

	return (pointer);
}
