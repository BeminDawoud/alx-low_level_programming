#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
* new_dog - create a new dog
* @name: string
* @age: float
* @owner: string
* Return: a pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (name == NULL || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	(*new).name = strdup(name);
	if ((*new).name == NULL)
	{
		free(new);
		return (NULL);
	}
	(*new).age = age;
	(*new).owner = strdup(owner);
	if ((*new).owner == NULL)
	{
		free((*new).name);
		free(new);
		return (NULL);
	}
	return (new);
}
