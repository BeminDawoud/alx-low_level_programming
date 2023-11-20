#include "lists.h"
/**
 * free_listint - a function to print element of list.
 * @head: pointer to the first node.
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
