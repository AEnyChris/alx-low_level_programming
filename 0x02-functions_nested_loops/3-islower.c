#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry point
 *@c: character to be checked
 *
 * Description: check character if lowercase
 *
 * Return: 1 if true. 0 if not
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
