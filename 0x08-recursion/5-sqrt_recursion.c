#include "main.h"

/**
 * test - helper function to sqrt_recursion
 * @n: integer to find the root of
 * @guess: guess numbers for root
 *
 *
 * Return: the square root of n an integer
 */
int test(int n, int guess)
{
	int root = (guess + n / guess) / 2;
	if (((root * root) - n) == 0)
	{
		return (root);
	}
	else if (root <= 0)
	{
		return (-1);
	}
	return (test(n, root));
}


/**
 * _sqrt_recursion - calculates the root of an integer
 * @n: integer to find root
 *
 * Return: int root of n
 */

int _sqrt_recursion(int n)
{
	int guess;

	if (n == 1)
	{
		guess = n;
	}
	else
		guess = n / 2;
	return (test(n, guess));
}
