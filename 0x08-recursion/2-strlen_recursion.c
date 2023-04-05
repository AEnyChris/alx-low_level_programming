#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string to be printed
 *
 *
 * Return: integer length of string
 */

int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s == '\0')
	{
		return (0);
	}
	return (n + _strlen_recursion(s + 1));
}
