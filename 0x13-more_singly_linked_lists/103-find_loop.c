#include "lists.h"
/**
 * find_listint_loop - Finds the startof a loop in a linked list.
 * @head: Pointer to the head of the linked list.
 * Return: pointer or null
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head, *nested = head;

	while (temp && nested && nested->next)
	{
		temp = temp->next;
		nested = nested->next->next;

		if (temp == nested)
		{
			temp = head;
			while (temp != nested)
			{
				temp = temp->next;
				nested = nested->next;
			}
			return (temp);
		}
	}

	return (NULL);
}
