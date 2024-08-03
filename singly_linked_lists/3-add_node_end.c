#include "lists.h"

/**
 * add_node_end - add
 * @head: head
 * @str: str
 * Return: newnode
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int c;
	list_t *newnode;
	list_t *last_node = *head;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);

	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	for (c = 0; str[c] != '\0'; c++)
	{
	}
	newnode->len = c;

	while (last_node != NULL && last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = newnode;
	newnode->next = NULL;

	return (newnode);
}
