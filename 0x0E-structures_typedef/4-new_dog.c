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

	ptr->name = name;
	if (ptr->name == NULL)
		return (NULL);
	ptr->age = age;
	ptr->owner = owner;
	if (ptr->owner == NULL)
		return (NULL);
	return (ptr);
}
