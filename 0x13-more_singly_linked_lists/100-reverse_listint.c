#include "lists.h"
/**
 * reverse_listint - a function to print element of list.
 * @head: pointer to the first node.
 * Return: pointer.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listtint_t *after = NULL;

	if (head)
	{
		while (*head != NULL)
		{
			after = (*head)->next;
			(*head)->next = previous;
			previous = *head;
			*head = after;
		}
		return (previous);
	}
}
