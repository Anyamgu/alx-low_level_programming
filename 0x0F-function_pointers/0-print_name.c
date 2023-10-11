#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: The name to print
 * @f: A function to prints the name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
