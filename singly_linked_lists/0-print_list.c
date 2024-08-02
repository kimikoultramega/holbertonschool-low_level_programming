#include <stdio.h>
<<<<<<< HEAD
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
=======
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
>>>>>>> dc43786673cd4d218ed87a3301e0f698ad17b5ed

	while (h != NULL)
	{
		if (h->str == NULL)
		{
<<<<<<< HEAD
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
=======
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
>>>>>>> dc43786673cd4d218ed87a3301e0f698ad17b5ed
}
