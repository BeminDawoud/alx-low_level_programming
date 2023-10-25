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
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	if (*s == '\0')
		_putchar('\n');
}
