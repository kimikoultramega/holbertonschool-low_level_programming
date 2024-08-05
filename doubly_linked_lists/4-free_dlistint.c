#include "lists.h"
/**
 * free_dlistint - list
 * @head: ptr
 *
 *
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
		head = NULL;
	}
}
