#include "lists.h"
/**
 * insert_dnodeint_at_index - function to get a node address in list
 * @h: pointer to the head of the list
 * @idx: data to be added
 * @n: data to be added
 * Return: address of node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newNode;
	unsigned int max_index;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	temp = *h;
	max_index = dlistint_len(temp);

	if (idx == 0)
		return (add_dnodeint(h, n));

	else if (idx == max_index)
		return (add_dnodeint_end(h, n));

	else if (idx > 0 && idx < max_index)
	{
		newNode = malloc(sizeof(dlistint_t));
		if (newNode == NULL)
			return (NULL);

		newNode->n = n;
		while (count < idx)
		{
			temp = temp->next;
			count++;
		}
		if (temp == NULL)
			return (NULL);
		newNode->prev = temp->prev;
		newNode->next = temp;
		temp->prev->next = newNode;

		return (newNode);
	}
	else
		return (NULL);
}

/**
 * dlistint_len - function to return length of a doubly linked list
 * @h: pointer to the head of the list
 * Return: number of elements in linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
