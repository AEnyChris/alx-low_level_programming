#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * str_concat - returns a pointer to concatenated string
 * @s1: string to concat s2 to
 * @s2: string to concat to s1
 *
 * Return: NULL if it fails otherwise pointer to array
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;
	unsigned int i, k, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	else if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	ar = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		ar[i] = s1[i];
	}
	for (j = i, k = 0; k <= strlen(s2); k++, j++)
	{
		ar[j] = s2[k];
	}
	return (ar);
}
