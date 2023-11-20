#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at  certain index in linked list
 * @head: 1st node in linked list
 * @index: index of the node to be returned.
 * Return: pointer to the node looking for, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
