#include "variadic_functions.h"
#include <string.h>
#include <stdbool.h>
/**
 * checkNULL - check if it is null or not.
 * @str: string to test.
 * Return: void.
 */
void checkNULL(char *str)
{
	switch ((str != NULL) + 1)
	{
	case 1:
		printf("(nil)");
		break;
	case 2:
		printf("%s", str);
		break;
	}
}
/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 * Return: void.
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	int len = strlen(format);
	char *sep = ", ", *str;
	bool sepFlag;

	va_start(args, format);
	while (i < len)
	{
		sepFlag = false;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			sepFlag = true;
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			sepFlag = true;
			break;
		case 'f':
			printf("%.6g", va_arg(args, double));
			sepFlag = true;
			break;
		case 's':
			str = va_arg(args, char *);
			checkNULL(str);
			sepFlag = true;
			break;
		default:
			break;
		}
		if (i != len - 1 && sepFlag == true)
			printf("%s", sep);
		i++;
	}
	putchar('\n');
	va_end(args);
}
