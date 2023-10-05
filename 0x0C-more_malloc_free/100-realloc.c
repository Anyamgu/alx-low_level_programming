#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _realloc - Reallocates memory using malloc and free
 * @ptr: Pointer to the previously allocated memory
 * @old_size: Size, in bytes, of the allocated space for ptr
 * @new_size: New size, in bytes, of the memory block
 *
 * Return: A pointer to the newly allocated memory, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	size_t min_size;
	size_t i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	min_size = (old_size < new_size) ? old_size : new_size;
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < min_size; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}
