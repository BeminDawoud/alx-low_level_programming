#include "lists.h"
/**
 * print_list - a function to print element of list.
 * @h: pointer to the first node.
 * Return: number of elements.
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr;

	ptr = malloc(sizeof(const list_t));
	ptr = h;
	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
