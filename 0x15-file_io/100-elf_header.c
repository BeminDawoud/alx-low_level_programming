#include "main.h"
/**
  * main - displays information of the elf file
  * @argc: arguments number.
  * @argv: arguments string.
  * Return: 0
  */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		dprintf(2, "Usage: elf_header file\n");
		exit(98);
	}
	printf("%s", argv[1]);
	return (0);
}
