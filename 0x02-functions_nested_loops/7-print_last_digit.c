#include "main.h"

/**
 * print_last_digit - Entry point
 *@i: character to be checked
 *
 * Description: return the value of the last digit
 *
 * Return: last digit of integer
 */

int print_last_digit(int n)
{
	int i = abs(n % 10);

	_putchar(48 + i)
	return (i);
}
