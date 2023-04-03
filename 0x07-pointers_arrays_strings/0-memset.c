#include <string.h>

/**
 * _memset - fills memory with constant byte
 *
 * @s: a pointer to the memory area
 * @b: the constant byte
 * @n: the first bytes of the memory area pointed to by s
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
