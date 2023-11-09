#include "variadic_functions.h"
/**
 * print_numbers - print out numbers.
 * @n: count of input numbers.
 * @separator:  string to be printed between numbers
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int num;
	unsigned int i;

	if (separator == NULL)
	{
		separator = " ";
	}
	va_start(args, n);

	num = va_arg(args, int);
	printf("%d", num);
	for (i = 1; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%s%d", separator, num);
	}
	putchar('\n');
	va_end(args);
}
