#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 *main - Entry point
 *
 *Return: 0 if successful
 *
 */

int main(void)
{
	char *hex;
	int i;

	hex = "0123456789abcdef";
	i = 0;
	while (hex[i] != '\0')
	{
		putchar(hex[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
