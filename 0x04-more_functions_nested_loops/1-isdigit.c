#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for numbers
 *
 * @c: a character to be checked
 *
 * Return: 1 or 0 otherwise
 */
int _isdigit(int c)
{
	char i = (int)c;

	if (isdigit(i))
		return (1);
	return (0);
}
