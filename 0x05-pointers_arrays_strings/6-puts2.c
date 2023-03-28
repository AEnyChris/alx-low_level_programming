#include "main.h"
#include <string.h>
/**
 * puts2 - prints even index characters
 *
 * @str: a string
 *
 * Return: 1 or 0 otherwise
 */
void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i <= len - 1; i += 2)
	{
		_putchar(str[i]);
	}
	putchar('\n');
}
