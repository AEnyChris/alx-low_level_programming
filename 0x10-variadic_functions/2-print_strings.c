#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: a string to be printed between each string argument
 * @n: number of string argument passed to function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int i;
	char *tmp;


	va_start(op, n);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(op, char *);
		if (tmp == NULL)
			tmp = "(nil)";
		printf("%s", tmp);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(op);
	printf("\n");
}
