#include "lists.h"

/**
 * add_nodeint_end - adds the node at end of the linked list
 * @head: pointer to 1st element in a list
 * @n: data to add in new element
 * Return: *p new node, else NULL when fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
