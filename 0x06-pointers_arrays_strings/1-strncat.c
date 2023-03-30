#include "main.h"
#include <string.h>
/**
 * _strcat - concatenate two strings
 *
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to result
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
