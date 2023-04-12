#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - helper function to is_prime_number
 * @size: array size
 * @c: initializing character
 *
 * Return: NULL if size is 0 or it fails otherwise pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
