#include "main.h"
#include <stdlib.h>

/**
 * _abs - Entry point
 *@x: character to be checked
 *
 * Description: check character if letter
 *
 * Return: 1 if true. 0 if not
 */

int _abs(int x)
{
	if (abs(x))
		return (1);
	else
		return (0);
}
