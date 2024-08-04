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
	list_t *temp = *head;

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
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (temp != NULL && temp->next != NULL)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp->next = newnode;
	}
	newnode->next = NULL;
	return (newnode);
}
