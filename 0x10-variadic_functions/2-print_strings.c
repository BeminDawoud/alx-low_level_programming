#include "variadic_functions.h"
/**
 * print_strings - print out numbers.
 * @n: count of input strings.
 * @separator:  string to be printed between strings
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator && i != 0)
			printf("%s", separator);
		str = va_arg(args, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("nil");
	}
	putchar('\n');
	va_end(args);
}
