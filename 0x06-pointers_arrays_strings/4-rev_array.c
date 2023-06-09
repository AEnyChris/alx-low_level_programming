#include "main.h"

/**
 * reverse_array - reverses content of integer array
 *
 * @a: array
 * @n: size of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2 ; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
