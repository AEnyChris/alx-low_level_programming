#include "main.h"
#include <string.h>
/**
 * _strncat - concatenate two strings with n bytes
 *
 * @dest: first string
 * @src: second string
 * @n: size of src bytes to concatenate
 *
 * Return: pointer to result
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
