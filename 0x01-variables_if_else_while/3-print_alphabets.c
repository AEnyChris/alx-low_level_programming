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
	char low;
	char upper;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');
	return (0);
}
