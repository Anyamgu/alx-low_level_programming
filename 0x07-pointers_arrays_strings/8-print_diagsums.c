#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers
 * @size: size of the square matrix
 * @a: pointer of the matrix
 *
 */

void print_diagsums(int *a, int size)
{
	int sum, num1 = 0, num2 = 0;

	for (sum = 0; sum < size; sum++)
	{
		num1 += a[sum];
		a += size;
	}
	a -= size;

	for (sum = 0; sum < size; sum++)
	{
		num2 += a[sum];
		a -= size;
	}

	printf("%d, %d\n", num1, num2);
}
