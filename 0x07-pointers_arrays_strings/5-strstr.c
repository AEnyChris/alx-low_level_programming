#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to search for
 *
 *
 * Return: pointer to beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int flag;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				flag = 1;
				break;
			}
			else
			{
				flag = 0;
			}
		}
	}

	if (flag == 1)
	{
		return (&haystack[j - i + 1]);
	}
	else
		return (NULL);
}
