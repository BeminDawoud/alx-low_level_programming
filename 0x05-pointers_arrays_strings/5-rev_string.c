#include "main.h"
#include <string.h>

/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i = strlen(s) - 1;
	int j = 0;

	while (i >= 0)
	{
		c[j] = s[i];
		i--;
		j++;
	}
	*s = *c;
}
