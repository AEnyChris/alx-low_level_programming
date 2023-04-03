#include "main.h"


/**
 * _memset - fills memory with a constant byte
 * @s: a memory buffer
 * @b: the byte to fill the memory
 * @n: the number of bytes to fill in the memory
 *
 * Return: the memory buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
