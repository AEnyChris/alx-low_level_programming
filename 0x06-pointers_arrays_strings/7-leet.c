#include <ctype.h>

/**
 * *leet - changes string to leet code
 *
 * @str: a string
 *
 * Return: a pointer to the transformed string
 */
char *leet(char *str)
{
	int i, j;
	char *lett = "aAeEoOtTlL";
	char *code = "4433007711";

	for (i = 0; str[i] != '\0' ; i++)
	{
		for (j = 0; lett[j] != '\0'; j++)
		{
			if (str[i] == lett[j])
			{
				str[i] = code[j];
			}
		}
	}
	return (str);
}
