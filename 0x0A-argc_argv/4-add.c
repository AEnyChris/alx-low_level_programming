#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_number - check if string contains letter
 * @s: string to be checked
 *
 * Return: flag - 1 if true and 0 otherwise
 */

int is_number(char *s)
{

	int flag;
	unsigned int j;

	for (j = 0; j < strlen(s); j++)
	{
		if (isdigit(s[j]))
		{
			flag = 1;
		}
		else
		{
			flag = 0;
			break;
		}
	}
	return (flag);
}

/**
 * main - Entry point of programme
 * @argc: count of arguments
 * @argv: vector array of arguments
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
		for (i = 1; i < argc; i++)
		{
			if (is_number(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	printf("%d\n", sum);
	return (0);
}
