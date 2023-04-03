#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: bytes for the segment to be extracted
 *
 *
 * Return: number of bytes of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
