#ifndef _FL_function_pointers
#define _FL_function_pointers
#include <stdio.h>
void f(char *);
void print_name(char *name, void (*f)(char *));
void action(int);
void array_iterator(int *array, size_t size, void (*action)(int));
int cmp(int);
int int_index(int *array, int size, int (*cmp)(int));
#endif
