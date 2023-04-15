#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * _calloc - returns a pointer to a copied string
 * @nmemb: size_t size of memory to be allocated
 * @size: size of bytes
 *
 * Return: pointer to  allocated memory or exit(98)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;

	if (nmemb == 0 || size == 0)
	{
		return ('\0');
	}

	pointer = malloc(size * nmemb);
	if (pointer == NULL)
		return (NULL);
	memset(pointer, 0, nmemb * size);

	return (pointer);
}
