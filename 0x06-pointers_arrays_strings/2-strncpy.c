#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string
 *
 * @dest: first string
 * @src: second string
 * @n: size of src bytes to copy
 *
 * Return: pointer to resuting dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
