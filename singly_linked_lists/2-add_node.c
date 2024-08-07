#include "lists.h"

/**
 * add_node - add node
 * @head: ptr
 * @str: info
 * Return: newnode
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int c;

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

	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
