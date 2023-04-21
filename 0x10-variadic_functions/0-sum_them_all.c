#include <stdarg.h>

/**
 * sum_them_all - free struct dog pointers
 * @n: required variable. Length of optional arguments
 *
 * Return: sum of optional arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	sum = 0;

	va_start(op, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(op, unsigned int);
	}
	va_end(op);

	return (sum);
}
