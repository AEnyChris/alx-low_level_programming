#include "search_algos.h"

/**
 * binary_search - does a binary search on an array
 * to find a value
 *
 * @array: pointer to the first element in as sorted array
 * @size: size of the array
 * @value: the value to be searched for
 *
 * Return: first index of value in the array,
 *			-1 if array is null or value not found
 */


int binary_search(int *array, size_t size, int value)
{
	int L, R;
	int m, i;

	L = 0;
	R = (int)size - 1;

	if (!array)
		return (-1);

	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			printf("%d", array[i]);
			if (i < R)
				printf(", ");
		}
		printf("\n");

		m = (R + L) / 2;
		if (array[m] < value)
		{
			L = m + 1;
		}
		else if (array[m] > value)
		{
			R = m - 1;
		}
		else
			return (m);
	}
	return (-1);
}
