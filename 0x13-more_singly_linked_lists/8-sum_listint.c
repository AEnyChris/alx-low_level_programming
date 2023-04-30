#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint- sum all the data in the list
 * @head: pointer to head
 *
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
