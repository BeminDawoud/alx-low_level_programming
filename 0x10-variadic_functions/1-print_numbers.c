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

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator && i != 0)
			printf("%s", separator);
		num = va_arg(args, int);
		printf("%d", num);
	}
	putchar('\n');
	va_end(args);
}
