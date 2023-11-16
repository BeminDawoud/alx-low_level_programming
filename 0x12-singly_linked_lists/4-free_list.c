#include "lists.h"
/**
 * free_list - a function to print element of list.
 * @head: pointer to the first node.
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = ptr->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
