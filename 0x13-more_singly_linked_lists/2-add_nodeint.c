#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <string.h>

/**
 * add_nodeint - adds a new node to the list
 * @head: pointer to pointer to head
 * @n: the integer data in the node
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	/*first we create the node using the pointer above*/

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);


	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
