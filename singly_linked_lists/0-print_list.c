#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - lista
 * list_t - lista
 * @h: puntero a header
 * Return: cantidad de nodos
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
			printf("[%i] %s\n", h->len, h->str);
		}
		nono_count++;
		h = h->next;
	}
	return (nono_count);
}
