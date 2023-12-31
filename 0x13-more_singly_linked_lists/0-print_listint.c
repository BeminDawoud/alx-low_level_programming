#include "lists.h"
/**
 * print_listint - a function to print element of list.
 * @h: pointer tio the first node.
 * Return: number of elements.
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
