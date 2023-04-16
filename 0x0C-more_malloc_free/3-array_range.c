#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - integer array ordered from min to max
 * @min: min element in array
 * @max: max element in array
 *
 * Return: pointer to integer array
 */

int *array_range(int min, int max)
{
	int i;
	int *ar = malloc(sizeof(int) * ((max - min) + 1));

	if (min > max || ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ar[i] = min++;
	}
	return (ar);
}
