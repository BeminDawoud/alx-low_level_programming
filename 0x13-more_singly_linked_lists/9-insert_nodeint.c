#include "lists.h"
/**
 * insert_nodeint_at_index - a function to print element of list.
 * @head: pointer to the first node.
 * @idx: the index.
 * @n: the value added.
 * Return: pointer.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *node;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}

	temp = *head;
	while (temp != NULL && count < (idx - 1))
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = temp->next;
	temp->next = node;

	return (node);
}
