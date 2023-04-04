#include <stdio.h>

/**
 * print_diagsums - prints sum diagonals of a square matrix
 * @a: square matrix
 * @size: size of matrix
 *
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0, j = 0; i < size; i++, j += size + 1)
	{
		sum1 += *(a + j);
	}

	for (i = 0, j = size - 1; i < size; i++, j += (size - 1))
	{
		sum2 += *(a + j);
	}

	printf("%d, %d\n", sum1, sum2);
}
