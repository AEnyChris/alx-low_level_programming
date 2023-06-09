#include <stddef.h>
/**
 * print_name - a function that prints a name
 * @name: the name to be printed
 * @f: function pointer to a print function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
