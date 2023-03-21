#include "main.h"

/**
 * print_alphabet_x10 - print_alphabet function
 *
 * Description: prints alphabet in lowercase ten times followed by a new line.
 *
 * Return: returns alpha of type char
 */


void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
