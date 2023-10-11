#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Search for an integer in an array
 * @array: The array to search through
 * @size: The number of elements in the array
 * @cmp: A pointer to the comparison function
 *
 * Return: Index of the first element for which
 * cmp doesn't return 0, or -1 if no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int ptr;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (ptr = 0; ptr < size; ptr++)
	{
		if (cmp(array[ptr]) != 0)
		{
			return (ptr);
		}
	}
	return (-1);
}
