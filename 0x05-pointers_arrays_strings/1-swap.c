#include "main.h"

/**
 * swap_int - function that swaps values of two integers
 * @a: swaps and stores the address of b
 * @b: swaps and stores the address of a
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
