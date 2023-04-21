#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: a string to be printed between numbers
 * @n: number of integers passed to function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int i;


	va_start(op, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(op, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(op);
	printf("\n");
}
