#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node to the end of list
 * @head: pointer to pointer to head
 * @str: the string data in the node
 *
 * Return: the address of the new node or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp;
	size_t length = 0;

	/*first we create the node using the pointer above*/

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	/*calculate the length of the string str*/
	while (str[length])
	{
		length++;
	}

	newNode->len = length;
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
