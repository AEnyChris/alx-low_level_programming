#include <stddef.h>

/**
 * array_iterator - executes function on each element of array
 * @array: array to be operated on
 * @size: size of the array
 * @action: pointer to the function to be used
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
