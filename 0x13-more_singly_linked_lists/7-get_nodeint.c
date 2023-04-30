#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a linked list
 * @head: pointer to head
 * @index: unsigned int index of node
 *
 * Return: the nth node with index index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp)
	{
		if (index == count)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
