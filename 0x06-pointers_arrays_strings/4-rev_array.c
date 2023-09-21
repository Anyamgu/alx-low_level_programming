#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @n: is the number of elements
 * @a: array of integers
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int j, l;

	for (j = 0; j < n--; j++)
	{
	l = a[j];
	a[j] = a[n];
	a[n] = l;
	}
}
