#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: pointer to head
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	while (*head != NULL)
	{
		h = (*head)->next;
		free((*head));
		*head = h;
	}
	*head = NULL;
}
