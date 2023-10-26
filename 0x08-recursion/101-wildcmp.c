#include "main.h"
/**
*wildcmp - compare strings
*@s1: string
*@s2: string
*
*Return: 0
*/
int wildcmp(char *s1, char *s2)
{
	if ((*s1 == '\0' || *s2 == '\0') && (*s1 == *s2 || *s2 == '*'))
		return (1);
	else if ((*s1 == '\0' || *s2 == '\0') && (*s1 != *s2 && *s2 != '*'))
		return (0);
	else if (*s1 != *s2 && *s2 == '*' && *(s2 + 1) != '\0')
		return (1);
	else if (*s1 == *s2)
		wildcmp(++s1, ++s2);
	else if (*s1 != *s2 && *s2 == '*' && *(s2 + 1) != '\0')
		wildcmp(s1, ++s2);
	else if (*s1 != *s2 && *s2 != '*' && (*s1 != '\0' || *s2 != '\0'))
		wildcmp(++s1, s2);
	else
		return (0);
}
