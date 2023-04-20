#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * main - Entry point of program
 * @argc: count of argument
 * @argv: array of argument
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '%' || *argv[2] == '/') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = get_op_func(argv[2])(num1, num2);

	printf("%d\n", result);
	return (0);
}
