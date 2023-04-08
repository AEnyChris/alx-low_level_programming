#include <stdio.h>
#include <stdlib.h>

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
	int mul = 1;

	if (argc - 1 != 2)
	{
		puts("Error");
		return (1);
	}
	else
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
	printf("%d\n", mul);
	return (0);
}
