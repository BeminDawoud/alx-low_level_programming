#include "lists.h"
/**
 * free_list - a function to print element of list.
 * @head: pointer to the first node.
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while (ptr)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
