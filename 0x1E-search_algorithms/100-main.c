#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array1[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };

    int array2[] = {
        2, 4, 6, 8, 10, 12, 14, 16, 18
    };
    size_t size1 = sizeof(array1) / sizeof(array1[0]);
    size_t size2 = sizeof(array2) / sizeof(array2[0]);


	printf("size1 = %lu | size2 = %lu\n", size1, size2);

    printf("Found %d at index: %d\n\n", 6, jump_search(array1, size1, 6));
    printf("Found %d at index: %d\n\n", 1, jump_search(array1, size1, 1));
    printf("Found %d at index: %d\n\n", 999, jump_search(array1, size1, 999));
    printf("Found %d at index: %d\n", 18, jump_search(array2, size2, 18));
    return (EXIT_SUCCESS);
}
