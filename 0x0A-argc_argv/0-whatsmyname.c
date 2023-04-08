#include <stdio.h>

/**
 * main - Entry point of programme
 * @argc: count of arguments
 * @argv: vector array of arguments
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
