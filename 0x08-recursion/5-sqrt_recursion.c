#include "main.h"

/**
 * test - helper function to sqrt_recursion
 * @n: integer to find the root of
 * @root: guess numbers for root
 *
 *
 * Return: the square root of n an integer
 */
int test(int n, int root)
{
	if (((root * root) - n) == 0)
	{
		return (root);
	}
	else if (root <= 0)
	{
		return (-1);
	}
	return (test(n, root - 1));
}


/**
 * _sqrt_recursion - calculates the root of an integer
 * @n: integer to find root
 *
 * Return: int root of n
 */

int _sqrt_recursion(int n)
{
	int root;

	if (n == 1)
	{
		root = n;
	}
	else
		root = n / 2;
	return (test(n, root));
}
