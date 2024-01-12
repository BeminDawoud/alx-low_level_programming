#include "lists.h"
/**
 * add_dnodeint - function to add a node at the start of list
 * @head: pointer to the head of the list
 * @n: data to be added
 * Return: address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newHead;

	if (head == NULL)
		return (NULL);
	newHead = malloc(sizeof(dlistint_t));

	if (newHead == NULL)
		return (NULL);

	newHead->n = n;
	newHead->prev = NULL;
	newHead->next = *head;

	*head = newHead;

	return (newHead);
}
