#include "lists.h"

/**
 * sum_listint - calculates sumation of all data in the listint_t list
 * @head: 1st node in a linked list
 *
 * Return: end sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
