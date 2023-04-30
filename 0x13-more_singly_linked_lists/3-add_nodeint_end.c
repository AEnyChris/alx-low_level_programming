#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - adds a new node to the end of list
 * @head: pointer to pointer to head
 * @n: the integer data in the node
 *
 * Return: the address of the new node or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;

	/*first we create the node using the pointer above*/

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	temp = *head;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = newNode;

	return (newNode);
}
