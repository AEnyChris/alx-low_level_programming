#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point to programm
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int num_byte;
	char *ar;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_byte = atoi(argv[1]);
	if (num_byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (i = 0; i < num_byte; i++)
	{
		if (i == num_byte - 1)
		{
			printf("%02hhx\n", ar[i]);
			break;
		}
		printf("%02hhx ", ar[i]);
	}
	return (0);
}
