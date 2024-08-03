#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - lista
 * @h: ptr
 * Return: node_count
 *
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
	node_count++;
	current = current->next;
	}

	return (node_count);
}
