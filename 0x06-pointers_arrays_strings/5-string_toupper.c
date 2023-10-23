#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a  string
 * to upper case
 * @s: an input string
 * Return: char pointer to converted string
 */
char *string_toupper(char *a)
{
	char *swap = a;

	while (*s)
	{
		if (*a >= 'a' && *a <= 'z')
			*a = *a - 32;
		a++;
	}
	return (swap);
}
