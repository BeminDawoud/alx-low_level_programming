#include "lists.h"
/**
 * free_listint_safe - a function to print element of list.
 * @h: pointer to the first node.
 * Return: size_t
*/
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0, i;
	listint_t *ptr, *check, *temp;

	ptr = *h;
	while (*h)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		check = ptr;
		count++;
		i = 0;
		for (i = 0; i < count; i++)
		{
			if (*h == check)
			{
				*h = NULL;
				return (count);
			}
			check = check->next;
		}
	}
	return (count);
}
