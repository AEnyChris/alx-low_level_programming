#include "main.h"
#include <stdio.h>

/**
 * print_sign - Entry point
 *@n: number to be checked
 *
 * Description: check and print the sign of a number
 *
 * Return: 1 if true. 0 if not
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}

int main(void)
{
	print_sign(-34);
	return (0);
}
