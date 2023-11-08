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
	dog_t *ptr = (dog_t *)malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (name == NULL || owner == NULL)
		return (NULL);
	ptr->name = name;
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->age = age;
	ptr->name = owner;
	if (ptr->owner == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
