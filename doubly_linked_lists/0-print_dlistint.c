#include "lists.h"

/**
 * print_dlistint - list
 * @h: puntero
 * Return: count
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
