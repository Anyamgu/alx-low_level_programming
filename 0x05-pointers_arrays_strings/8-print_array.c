#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: is the array name
 * @n: is the number of elements of the array to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < (n - 1); y++)
	{
		printf("%d, ", a[y]);
	}
		if (y == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		printf("\n");
}
