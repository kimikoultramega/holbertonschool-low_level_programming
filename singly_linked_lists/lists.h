#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct lists_s
{
	char *str;
	unsigned int len;
	struct lists_s *next;
} list_t;

/* Prototipos de funciones */
size_t print_list(const list_t *h);

#endif /* LISTS_H */
