#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to head
 *
 * Return: the data in the node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
