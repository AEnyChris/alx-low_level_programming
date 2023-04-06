
/**
 * test - helper function to is_prime_number
 * @n: number to test on integer
 * @div: divisor to test n with
 *
 * Return: 1 if test is true. 0 otherwise
 */

int test(int n, int div)
{
	if (div == 1)
	{
		return (1);
	}
	else if (n % div == 0)
	{
		return (0);
	}
	return (test(n, div - 1));
}
/**
 * is_prime_number - test for prime numbers
 * @n: number to test
 *
 *
 * Return: 1 if test is true. 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2 || n == 3 || n == 5)
	{
		return (1);
	}
	else
		return (test(n, n - 1));
}
