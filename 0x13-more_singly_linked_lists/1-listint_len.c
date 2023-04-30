#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - number of the elements of a list
 * @h: a linked list
 *
 * Return: The number of element in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;


	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
