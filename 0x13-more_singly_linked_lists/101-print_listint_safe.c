#include "lists.h"
/**
 * print_listint_safe - a function to print element of list.
 * @head: pointer tio the first node.
 * Return: number of elements.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *ptr;

	if (head == NULL)
		return (98);
	ptr = head;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
