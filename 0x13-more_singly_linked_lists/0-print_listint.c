#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list
 * @h: a linked list
 *
 * Return: The number of element in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;


	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
