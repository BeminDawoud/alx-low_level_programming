#include "lists.h"
/**
 * pop_listint - a function to print element of list.
 * @head: pointer to the first node.
 * Return: n.
*/
int pop_listint(listint_t **head)
{
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	free((*head)->next);
	free(head);
	return (n);

}
