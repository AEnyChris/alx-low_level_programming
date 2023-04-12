#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a copied string
 * @str: string to copy
 *
 * Return: NULL if size is 0 or it fails otherwise pointer to array
 */

char *_strdup(char *str)
{
	char *ar;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	ar = malloc(sizeof(char) * (strlen(str) + 1));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= strlen(str); i++)
	{
		ar[i] = str[i];
	}
	return (ar);
}
