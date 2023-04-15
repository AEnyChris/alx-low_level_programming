#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * string_nconcat - returns a pointer to concatenated string
 * @s1: string to concat s2 to
 * @s2: string to concat to s1
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: NULL if it fails otherwise pointer to array
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i, k, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	ar = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
	{
		ar[i] = s1[i];
	}
	for (j = i, k = 0; k < n; k++, j++)
	{
		ar[j] = s2[k];
	}
	return (ar);
}
