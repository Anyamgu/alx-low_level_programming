#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_at_start - Inserts a new node
 * at the beginning of a dlistint_t list
 * @h: Pointer to a pointer to the head of the list
 * @n: Value to add to the new node
 * Return: Address of the new node or NULL if it failed
 */
dlistint_t *insert_at_start(dlistint_t **h, int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *h;
	new_node->prev = NULL;

	if (*h != NULL)
		(*h)->prev = new_node;

	*h = new_node;
	return (new_node);
}

/**
 * insert_in_middle - Inserts a new node at
 * the specified index in a dlistint_t list
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index where the new node should be inserted
 * @n: Value to add to the new node
 * Return: Address of the new element or NULL if it failed
 */
dlistint_t *insert_in_middle(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	temp = *h;

	while (i < idx - 1)
	{
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}

/**
 * insert_dnodeint_at_index - Inserts a new node
 * at a given position in a dlistint_t list
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index of the list where the new node should be added
 * @n: Value to add to the new node
 * Return: Address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int size = 0;
	dlistint_t *temp = *h;

	if (idx == 0)
		return (insert_at_start(h, n));

	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}

	if (idx == size)
		return (add_dnodeint_end(h, n));

	if (idx > size)
		return (NULL);

	return (insert_in_middle(h, idx, n));
}
