#include "lists.h"
/**
 * print_dlistint - function to print all  elements of a doubly linked list
 * @h: pointer to the head of the list
 * Return: number of elements in linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
