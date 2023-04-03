#include <stddef.h>

/**
 * _strpbrk - gets the first occurence of s in accept
 * @s: string
 * @accept: string to be check against
 *
 *
 * Return: pointer to the matched character
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
