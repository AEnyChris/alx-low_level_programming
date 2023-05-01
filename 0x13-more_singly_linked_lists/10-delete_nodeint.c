#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index- delete node at index
 * @head: pointer to head
 * @index: unsigned integer index of node
 *
 *
 * Return: 1 if successful. -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prevNode;
	listint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);

	temp = *head;
	while (temp)
	{
		if (index == 0)
		{
			*head = temp->next;
			free(temp);
			return (1);
		}

		if (count == (index - 1))
			prevNode = temp;

		if (count == index)
		{
			prevNode->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
