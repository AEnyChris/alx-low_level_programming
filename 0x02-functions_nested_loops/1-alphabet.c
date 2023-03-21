#include "main.h"

/**
 * print_alphabet - print_alpahbet function
 *
 * Description: It prints alphabet in lowercase followed by a new line.
 *
 * Return: returns alpha of type char
 */


void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
