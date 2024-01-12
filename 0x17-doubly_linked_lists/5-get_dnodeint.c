#include "lists.h"
/**
 * get_dnodeint_at_index - function to get a node address in list
 * @head: pointer to the head of the list
 * @index: data to be added
 * Return: address of node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (count < index)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
		count++;
	}
	return (temp);
}
