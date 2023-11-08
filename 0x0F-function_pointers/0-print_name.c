#include "main.h"
/**
*print_name - to print name
*@name: pointer to a string
*@f: function pointer
*/
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
