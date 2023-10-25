#include "main.h"
/**
 * _strlen_recursion - puts function with recursion
 * @s: parameter
 * Return: Void
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
return (1 + _strlen_recursion(s + 1));
}
