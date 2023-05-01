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
	listint_t *temp;
	listint_t *safe;

	temp = *head;
	safe = (temp->next)->next; /*keeping N2 safe*/
	(temp->next)->next = *head;
	*head = temp->next;
	temp->next = NULL;
	while (safe)
	{
		temp = safe;
		safe = temp->next;
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
