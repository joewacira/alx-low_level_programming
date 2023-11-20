#include "lists.h"

/**
 * pop_listint -removes head node of linked list
 * @head: pointer to 1st element in linked list
 * Return: data inside the elems that was removed,
 * or (0) if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
