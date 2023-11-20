#include "lists.h"
/**
 * free_listint - a function to print element of list.
 * @head: pointer to the first node.
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *tmp, *ptr;

	if (head == NULL)
		return;

	tmp = head;

	while (tmp)
	{
		ptr = tmp->next;
		free(ptr->n0);
		free(tmp);
		tmp = ptr;
	}
}
