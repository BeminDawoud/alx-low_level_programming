#include "lists.h"
/**
 * print_list - a function to print element of list.
 * @h: pointer to the first node.
 * Return: number of elements.
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr;

	ptr = malloc(sizeof(const list_t));
	ptr = h;
	while (ptr)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
