#include <ctype.h>
#include <string.h>
/**
 * *cap_string - capitalize each word
 *
 * @str: a string
 *
 * Return: a pointer to the transformed string
 */
char *cap_string(char *str)
{
	int len = strlen(str);
	char *sep = " \t\n.,;!?\"(){}";
	int len_sep = strlen(sep);
	int i, s;

	for (i = 0; i < len; i++)
	{
		for (s = 0; s < len_sep; s++)
		{
			if (str[i] == sep[s])
			{
				if (isalpha(str[i + 1]) && islower(str[i + 1]))
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
	return (str);
}
