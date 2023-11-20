#include "lists.h"
/**
 * add_nodeint_end - a function to print element of list.
 * @head: pointer to the first node.
 * @n: number added.
 * Return: pointer.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = ptr;
	}

	return (ptr);
}
