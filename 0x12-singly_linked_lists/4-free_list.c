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
	tmp = head;
	while (tmp)
	{
		ptr = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = ptr;
	}
}
