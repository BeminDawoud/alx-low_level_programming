#include "lists.h"
/**
 * free_list - a function to print element of list.
 * @head: pointer to the first node.
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *ptr, *tmp;

	if (head == NULL)
		return;
	ptr = head;
	while (tmp)
	{
		tmp = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = tmp;
	}
}
