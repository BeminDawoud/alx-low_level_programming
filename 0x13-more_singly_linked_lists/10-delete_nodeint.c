#include "lists.h"
/**
 * delete_nodeint_at_index - a function to print element of list.
 * @head: pointer to the first node.
 * @index: the index.
 * Return: integer.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *current;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	previous = *head;
	current = *head;
	if (*head && index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (count < index)
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
