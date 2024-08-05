#include "lists.h"

/**
 * dlistint_len - lista
 * @h: ptr
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
