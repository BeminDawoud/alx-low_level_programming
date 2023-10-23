#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int flag;
	unsigned int ans;
	char *temp = accept;

	accept = temp;
	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				ans++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = temp;
		if (flag == 0)
			break;
	}
	return (ans);
}
