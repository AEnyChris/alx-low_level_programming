#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 *
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion((s + 1));
}
