#include "lists.h"

/**
 * add_nodeint - adds a new_node at the start of linked list
 * @head: pointer to the begining  node in  list
 * @n: data to add to new node
 * Return:  new node, else NULL when fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
