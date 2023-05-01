#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 * reverse_listint- inserts a new node at given position
 * @head: pointer to pointer to head
 *
 * Return: address of first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *safe;

	while (*head)
	{
		safe = *head->next;
		*head->next = temp;
		temp = *head;
		*head = safe;
	}
	*head = safe
	return (*head);
}
