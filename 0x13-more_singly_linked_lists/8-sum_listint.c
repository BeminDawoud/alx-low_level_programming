#include "lists.h"
/**
 * sum_listint - a function to print element of list.
 * @head: pointer to the first node.
 * Return: n.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
