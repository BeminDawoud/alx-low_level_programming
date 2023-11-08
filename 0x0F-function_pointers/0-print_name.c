#include "function_pointers.h"
/**
*print_name - to print name
*@name: pointer to a string
*@f: function pointer
*/
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
