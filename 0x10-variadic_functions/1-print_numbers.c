#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers separated by a string
 * @separator: The string to be printed between numbers
 * @n: The number of integers to print
 * @...: A variable number of integers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;

	va_start(ap, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(ap, int));
		if (a < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
