#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Prints a variable number of arguments based on the format
 * @format: The format string containing format specifiers
 * @...: A variable number of arguments
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *str;

	va_start(ap, format);

	while (format && format[i])
	{
		if (i > 0)
		{
			printf(", ");
		}
		if (format[i] == 'c')
		{
			printf("%c", va_arg(ap, int));
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(ap, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(ap, double));
		}
		else if (format[i] == 's')
		{
			str = va_arg(ap, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
