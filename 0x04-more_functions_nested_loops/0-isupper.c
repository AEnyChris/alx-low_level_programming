#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase alphabet
 *
 * @c: a character to be checked
 *
 * Return: 1 or 0 otherwise
 */
int _isupper(int c)
{
	char i = (int)c;

	if (isupper(i))
		return (1);
	return (0);
}
