#include "main.h"
/**
 * set_string -  sets the value of a pointer to a char.
 * @s: a pointer to a pointer of a string
 * @to: a pointer to a string
 * Return: null
 */
void set_string(char **s, char *to)
{
	*s = to;
}
