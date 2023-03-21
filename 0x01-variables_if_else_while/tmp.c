#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 for success
 */

int main(void)
{
	int i;
	int c;

	c = '0';
	i = '1';
	if ((c + c) > (c + i))
		putchar(c);
	else
		putchar(i);
	putchar('\n');
	return (0);
}
