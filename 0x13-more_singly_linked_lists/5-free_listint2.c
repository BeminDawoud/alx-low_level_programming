#include "lists.h"
/**
 * free_listint2 - a function to print element of list.
 * @head: pointer to the first node.
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head && *head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
