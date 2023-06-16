#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the beginning of the node
 * @idx: the index where to insert
 * @n: data to enter
 * Return: pointer to the new node, NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *next, *curr;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		curr = *h;
		for (i = 0; i < idx - 1 && curr != NULL; i++)
			curr = curr->next;
		if (curr == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = curr;
		next = curr->next;
		curr->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
