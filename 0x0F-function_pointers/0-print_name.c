#include"stdlib.h"
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name string (char *)
 * @f: pointer to function that does the printing to stdout
 * Return: nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
