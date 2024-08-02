#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct lists_s - sigly linked list
 * @str: string
 * @len: length of the string str
 * @next: pointer to the next node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
