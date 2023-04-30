#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: pointer to head
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	while (head)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
