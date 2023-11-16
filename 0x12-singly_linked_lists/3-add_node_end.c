#include "lists.h"
/**
 * add_node_end - a function to print element of list.
 * @head: pointer to the first node.
 * @str: string to be added.
 * Return: number of elements.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *tmp;

	ptr = malloc(sizeof(list_t));
	tmp = malloc(sizeof(list_t));
	if (ptr == NULL || tmp == NULL)
		return (NULL);
	tmp = *head;
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = ptr;
	return (ptr);
}
