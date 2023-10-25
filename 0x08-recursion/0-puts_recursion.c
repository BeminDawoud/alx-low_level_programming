#include "main.h"
/**
 * _puts_recursion - puts function with recursion
 * @s: parameter
 * Return: Void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		putchar('\n');
}
