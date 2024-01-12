#include "lists.h"
/**
 * add_dnodeint_end - function to add a node at the end of list
 * @head: pointer to the head of the list
 * @n: data to be added
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *old, *newHead;

	if (head == NULL)
	return (NULL);
	old = *head;
	newHead = malloc(sizeof(dlistint_t));

	if (newHead == NULL)
		return (NULL);

	newHead->n = n;
	newHead->next = NULL;

	if (old == NULL)
	{
		newHead->prev = NULL;
		*head = newHead;
	}

	else
	{
		while (old->next != NULL)
		{
			old = old->next;
		}
		old->next = newHead;
		newHead->prev = old;
	}
	return (newHead);
}
