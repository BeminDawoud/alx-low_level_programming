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
	dog_t *ptr;

	if (name == NULL || owner == NULL)
		return (NULL);
	ptr = (dog_t *)malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->name = (char *)malloc(strlen(name) + 1);
	if (ptr->name == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	strcpy(ptr->name, name);

	ptr->age = age;
	ptr->owner = (char *)malloc(strlen(owner) + 1);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	strcpy(ptr->owner, owner);
	return (ptr);
}
