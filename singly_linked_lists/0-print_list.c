#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_list - funcion
 * @h: puntero a struct
 * Return: nono_count
 */
size_t print_list(const list_t *h)
{
	size_t nono_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%i %s", h->len, h->str);
		}
		h = h->next;
		nono_count++;
	}
	return (nono_count);
}
