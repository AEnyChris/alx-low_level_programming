#include <stdio.h>
#include "main.h"

/**
 *main - Entry point
 *
 *Return: 0 if successful
 *
 */

int main(void)
{
	char *alpha;
	int i;

	alpha = "abcdefghijklmnopqrstuvwxyz";
	i = 0;
	while (alpha[i] != '\0')
	{
		_putchar(alpha[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
