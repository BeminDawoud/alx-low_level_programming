#include "lists.h"
/**
 * free_dlistint - function to free all  elements of a doubly linked list
 * @head: pointer to the head of the list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next = NULL;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
