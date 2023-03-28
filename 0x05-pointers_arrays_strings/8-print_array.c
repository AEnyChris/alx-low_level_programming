#include "main.h"
/**
 * print_array - prints n characters in an array
 *
 * @a: an array
 * @n: an integer, the length of the array a
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d", a[i]);
	}
	putchar('\n');
}
