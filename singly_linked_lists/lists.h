#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
<<<<<<< HEAD
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
=======
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
>>>>>>> dc43786673cd4d218ed87a3301e0f698ad17b5ed
