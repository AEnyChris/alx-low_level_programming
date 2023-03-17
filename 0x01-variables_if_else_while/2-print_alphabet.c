#include <stdlib.h>
#include <time.h>
#include <stdio.h>

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
		putchar(alpha[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
