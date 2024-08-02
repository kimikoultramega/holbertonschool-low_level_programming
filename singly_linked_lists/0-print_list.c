#include <stdio.h>
#include "lists.h"

/**
 * print_list - linked list
 * @h: puntero de la funcion.
 * Return: nonocounter
 *
 *
 */

size_t print_list(const list_t *h)
{
	size_t nonocounter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		{
			printf("[unsigned int] char *, h->len, h->str");
		}
		nonocounter ++;
		h = h->next;
	}
	return (nonocounter);
}
