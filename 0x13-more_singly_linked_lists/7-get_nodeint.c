#include "lists.h"
/**
 * get_nodeint_at_index - a function to print element of list.
 * @head: pointer to the first node.
 * @index: the index.
 * Return: n.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (count < index)
	{
		temp = temp->next;
	}
	return (temp);

}
