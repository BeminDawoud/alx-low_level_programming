#include "lists.h"
/**
 * sum_dlistint - function to return sum of all elements of list
 * @head: pointer to the head of the list
 * Return: sum of elements in linked list
 */

int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
