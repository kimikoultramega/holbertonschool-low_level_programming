#include "lists.h"

/**
 * add_dnodeint - list
 * @head: ptr
 * @n: parametro
 * Return: new_node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;/** Delcaro un nuevo puntero a la struct**/

	new_node = malloc(sizeof(dlistint_t));/** Asigno memoria a mi nuevo nodo**/

	if (new_node == NULL)/** Verifico que el nuevo nodo no sea NULL **/
	{
		return (NULL);
	}

	new_node->n = n;/** Asigno el parametro n al miembro n del nodo **/
	new_node->next = *head;/** Hago que mi nuevo nodo apunte a head **/
	new_node->prev = NULL;/** Hago que mi nuevo nodo en prev sea NULL, porque será el primer nodo de la lista **/

	if (*head != NULL)/** Si head es diferente a NULL entonces hago que el prev de head sea el new_node **/
	{
		(*head)->prev = new_node;
	}
	*head = new_node;/** Actualizo el head a new_node **/
	return (new_node);/** Retorno new_node **/
}
