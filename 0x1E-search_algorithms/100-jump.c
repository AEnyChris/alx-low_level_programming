#include "search_algos.h"
#include <math.h>
/**
 * jump_loop - a jump search algorithm to find
 * a given value
 *
 * @array: the array to search of int elements, sorted
 * @size: the size or length of the array
 * @value: the value to be search for
 *
 * Return: the index of the first instance of value;
 *         -1 if array is empty or value not found
 */


int jump_loop(int *array, size_t size, int value)
{
	size_t a, b;

	a = 0;
	b = sqrt(size);

	if (!array)
		return (-1);

	while (b < size)
	{
		printf("Value checked array[%lu] = [%i]\n", a, array[a]);
		if (array[b] < value)
		{
			a = b;
			b += sqrt(size);
			if (a >= size)
				return (-1);
		}
		else
			break;
	}

	if (b > size)
		printf("Value checked array[%lu] = [%i]\n", a, array[a]);

	printf("Value found between indexes [%lu] and [%lu]\n", a, b);

	while (array[a] < value)
	{
		if (b < size && a == b)
			return (-1);
		else if (b > size && a == size)
			return (-1);
		printf("Value checked array[%lu] = [%i]\n", a, array[a]);
		a += 1;
	}
	return (a);
}

/**
 * jump_search - a jump search algorithm to find
 * a given value
 *
 * @array: the array to search of int elements, sorted
 * @size: the size or length of the array
 * @value: the value to be search for
 *
 * Return: the index of the first instance of value;
 *         -1 if array is empty or value not found
 */


int jump_search(int *array, size_t size, int value)
{
	size_t a = jump_loop(array, size, value);

	if (array[a] == value)
	{
		printf("Value checked array[%lu] = [%i]\n", a, array[a]);
		return (a);
	}
	else
		return (-1);
}
