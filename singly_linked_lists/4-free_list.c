#include "lists.h"

/**
 * free_list - list free
 * @head: ptr
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (temp != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
