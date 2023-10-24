#include "main.h"

/**
 * leet - the function encodes a string.
 * @s: input string to encode
 * Return: encoded string
 */
char *leet(char *s)
{
	char check[] = "aAoOeElLtT";
	char sub[] = "4400331177";
	int i = 0;
	char *start = s;

	for (; *s; s++)
	{
		for (; i < 9; i++)
		{
			if (*s == check[i])
				*s = sub[i];
		}
		i = 0;
	}
	return (start);
}
