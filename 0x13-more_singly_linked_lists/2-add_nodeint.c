#include "lists.h"
/**
 * add_nodeint - a function to print element of list.
 * @head: pointer to the first node.
 * @n: number to add.
 * Return: number of elements.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
