#include "main.h"

/**
* main - printing file name
* @argc: count of args
* @argv: array of strings
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i > argc; i++)
		pirintf("%s\n", argv[i]);
	return (0);
}