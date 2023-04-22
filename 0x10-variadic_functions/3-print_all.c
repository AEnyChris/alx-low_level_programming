#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_all - print formated string
 * @format: string of types of input argument
 *
 * Return: void
 */

void print_all(const char *const format, ...)
{
	va_list ar;
	int i = 0;
	char *space = "";
	char *tmps;


	va_start(ar, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", space, va_arg(ar, int));
				break;
			case 'i':
				printf("%s%d", space, va_arg(ar, int));
				break;
			case 'f':
				printf("%s%f", space, va_arg(ar, double));
				break;
			case 's':
				tmps = va_arg(ar, char *);
				if (tmps == NULL)
				{
					tmps = "(nil)";
				}
				printf("%s%s", space, tmps);
				break;
			default:
				i++;
				continue;
		}
		space = ", ";
		i++;
	}

	va_end(ar);
	printf("\n");
}
