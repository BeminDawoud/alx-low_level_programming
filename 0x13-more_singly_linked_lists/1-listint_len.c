#include "lists.h"
/**
 * print_listint - a function to print element of list.
 * @h: pointer tio the first node.
 * Return: number of elements.
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	ptr = malloc(sizeof(const listint_t));
	ptr = h;
	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
