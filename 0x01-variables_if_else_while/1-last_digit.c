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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
		printf("Last digit of %i is and is greater than 5\n", n);
	if ((n % 10) == 0)
		printf("Last digit of %i is and is 0\n", n);
	if ((n % 10) < 6)
		printf("Last digit of %i is and is less than 6\n", n);
	return (0);
}
