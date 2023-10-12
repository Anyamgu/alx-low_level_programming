#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings separated by a string
 * @separator: The string to be printed between strings
 * @n: The number of strings to print
 * @...: A variable number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int b;
	char *str;

	va_start(list, n);

	for (b = 0; b < n; b++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (b < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
