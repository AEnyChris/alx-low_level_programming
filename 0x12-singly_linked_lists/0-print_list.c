#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 * @h: a linked list
 *
 * Return: The number of element in the list
 */
size_t print_list(const list_t *h)
{
	char *temp;
	size_t count = 0;
	size_t num;


	while (h != NULL)
	{
		temp = h->str;
		num = h->len;
		if (h->str == NULL)
		{
			temp = "(nil)";
			num = 0;
		}
		printf("[%lu] %s\n", num, temp);
		h = h->next;
		count++;
	}
	return (count);
}
