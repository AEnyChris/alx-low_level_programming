#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 * insert_nodeint_at_index- inserts a new node at given position
 * @head: pointer to head
 * @idx: index to add node in list
 * @n: integer data in added node
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *temp;
	unsigned int count = 1;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}
	temp = *head;
	while (temp && temp->next)
	{
		if (count == idx)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
