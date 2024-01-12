#include "lists.h"
/**
 * delete_dnodeint_at_index - function to free all  elements of list
 * @head: pointer to the head of the list
 * @index: node to be deleted
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *previous, *current;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	previous = *head;
	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL && count < index)
	{
		previous = current;
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);
	previous->next = current->next;
	free(current);
	return (1);
}
