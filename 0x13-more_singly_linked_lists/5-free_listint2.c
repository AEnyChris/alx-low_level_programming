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
	if (*head == NULL || head == NULL)
		return;

	while (*head != NULL)
	{
		h = (*head)->next;
		free((*head));
		*head = h;
	}
	*head = NULL;
}
