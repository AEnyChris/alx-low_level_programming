#include <ctype.h>
#include <string.h>

/**
 * *string_toupper - changes lowercase to uppercase
 *
 * @str: a string
 *
 * Return: a pointer to the transformed string
 */
char *string_toupper(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (islower(str[i]))
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
