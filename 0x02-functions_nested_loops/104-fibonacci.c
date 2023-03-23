#include <stdio.h>

/**
 *fibonacci - prints the fibonacci sequence
 *@limit: limit of the sequence to stop
 *
 * Description: prints the fibonacci sequence up to
 * specified limit variable as described above
 *
 * Return: limit number of fibonacci sequence
 */

void fibonacci(int limit)
{
	int i, t1, t2, nextTerm;

	i = 1;
	t1 = 1;
	t2 = 2;
	printf("%d %d ", t1, t2);
	nextTerm = t1 + t2;
	while (i <= limit)
	{
		printf("%d ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
		i++;
	}
}

/**
 *main - Entry point
 *
 * Description: program starts to here
 *
 * Return: 0 when succesful
 */

int main(void)
{
	int limit = 98; /* Maximum limit of the Fibonacci sequence to be printed*/

	fibonacci(limit);
	return (0);
}
