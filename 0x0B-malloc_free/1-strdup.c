#include <string.h>

/**
 * _strdup - returns a pointer to a copied string
 * @str: string to copy
 *
 * Return: NULL if size is 0 or it fails otherwise pointer to array
 */

char *_strdup(char *str)
{
	return (strdup(str));
}
