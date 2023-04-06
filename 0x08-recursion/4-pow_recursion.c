#include "main.h"

/**
 * _pow_recursion - returns the power of x to y
 * @x: integer to raise
 * @y: integer to raise to
 *
 * Return: integer power of x to y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
