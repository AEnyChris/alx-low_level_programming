#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: array to check
 * @size: size of array
 * @cmp: pointer to the compare function
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
