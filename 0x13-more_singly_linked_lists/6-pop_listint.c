#include "lists.h"
/**
 * pop_listint - a function to print element of list.
 * @head: pointer to the first node.
 * Return: n.
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = (*head)->n;
	*head = temp->next;
	free(temp);

	return (n);

}
