#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Counts the number of elements in a dlistint_t list
 * @h: Pointer to the head of the list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t elements = 0;

	while (current != NULL)
	{
		elements++;
		current = current->next;
	}
	return (elements);
}
