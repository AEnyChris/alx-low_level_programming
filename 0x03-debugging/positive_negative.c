#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *positive_or_negative - Entry point
 *@i: number to be checked
 *
 *Return: 0 if successful
 *
 */
int positive_or_negative(int i)
{
	if (i > 0)
		printf("%i is positive\n", i);
	if (i == 0)
		printf("%i is zero\n", i);
	if (i < 0)
		printf("%i is negative\n", i);
	return (0);
}
