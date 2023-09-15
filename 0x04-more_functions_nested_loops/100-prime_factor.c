#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factor of 612852475143
 * Return: Always 0
 */

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = 1 + 2)
	{
		while ((n % i == 0) && (n != i))
		{
			n = n / 1;
		}
	}
	printf("%lu\n", n);
	return (0);
}
