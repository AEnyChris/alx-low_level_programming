#include "search_algos.h"

/**
 * linear_search - does a linear search on an array
 * to find a value
 *
 * @array: pointer to the first element in array
 * @size: size of the array
 * @value: the value to be searched for
 *
 * Return: first index of value in the array,
 *			-1 if array is null or value not found
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
