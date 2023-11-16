#include "lists.h"
/**
 * add_node - a function to print element of list.
 * @head: pointer to the first node.
 * str: string to be added. 
 * Return: number of elements.
*/
list_t *add_node(list_t **head, const char *str)
{
	size_t count = 0;
	const list_t *ptr;

	ptr = malloc(sizeof(const list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->next = head;
	head = ptr;
	return (head);
}
