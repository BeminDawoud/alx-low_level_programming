#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @a: An input string to capitalize letters
 * Return: pointer to s
 */
char *cap_string(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (i == 0 && (a[i] >= 'a' && a[i] <= 'z'))
			a[i] = a[i] - 32;
		else if (a[i] == ' ' || a[i] == '\n' || a[i] == '\t' || a[i] == '!' || a[i] == '?' || a[i] == '}' || a[i] == '{' || a[i] == '"' || a[i] == ';')
		{
			if(a[i + 1] >= 'a' && a[i + 1] <= 'z')
				a[i + 1] = a[i + 1] - 32;
		else if (a[i] == ',' || a[i] == '.')
			if(a[i + 1] >= 'a' && a[i + 1] <= 'z')
				a[i + 1] = a[i + 1] - 32;
		}
	i++;
	}
	return (a);
}
