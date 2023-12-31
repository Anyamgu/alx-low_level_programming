#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Prints a variable number of arguments based on the format.
 * @format: The format string containing format specifiers.
 * @...: A variable number of arguments.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *sep = "";
	int i = 0;
	char *str;

	va_start(ap, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	va_end(ap);
	printf("\n");
}
