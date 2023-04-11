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
	int  i, cents, res = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		cents = atoi(argv[1]);
		for (i = 0; i < 5 && cents >= 0; i++)
		{
			while (cents >= coins[i])
			{
				res++;
				cents -= coins[i];
			}
		}
		printf("%d\n", res);
		return (0);
	}
}
