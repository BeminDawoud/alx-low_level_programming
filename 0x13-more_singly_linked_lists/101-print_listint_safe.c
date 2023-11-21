#include "lists.h"
/**
 * print_listint_safe - a function to print element of list.
 * @head: pointer tio the first node.
 * Return: number of elements.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0, i;
	const listint_t *ptr, *check;

	ptr = head;
	while (ptr)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		ptr = ptr->next;
		count++;
		check = head;
		i = 0;
		for (i = 0; i < count; i++)
		{
			if (ptr == check)
			{
				printf("-> [%p] %d\n", (void *)ptr, ptr->n);
				return (count);
			}
			check = check->next;
		}
	}
	return (count);
}
