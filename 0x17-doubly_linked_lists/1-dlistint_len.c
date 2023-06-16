#include "lists.h"

/**
 * dlistint_len - returns the number of elements in dlistint list
 * @h: pointer to the start
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
