#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point of programme
 * @argc: count of arguments
 * @argv: vector array of arguments
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, flag;
	unsigned long int j;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (1);
	}
	else
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
				{
					flag = 1;
				}
				else
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
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
