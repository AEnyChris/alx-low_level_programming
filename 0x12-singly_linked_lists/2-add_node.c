#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node to the list
 * @head: pointer to pointer to head
 * @str: the string data in the node
 *
 * Return: the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
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
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
