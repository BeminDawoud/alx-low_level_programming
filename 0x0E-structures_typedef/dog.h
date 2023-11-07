#ifndef _FL_DOG_H_
#define _FL_DOG_H_

/**
* struct dog - this is a prototype for the object dog
* @name: string.
* @age: float
* @owner: string
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
