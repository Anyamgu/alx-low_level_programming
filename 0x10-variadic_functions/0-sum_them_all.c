#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - Sums all its parameters
 * @n: The number of parameters to sum
 *
 * Return: The sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list up;
	int sum = 0;
	unsigned int l;

	if (n == 0)
	{
		return (0);
	}
	va_start(up, n);

	for (l = 0; l < n; l++)
	{
		sum += va_arg(up, int);
	}
	va_end(up);
	return (sum);
}
