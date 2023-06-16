#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index in the dlistint
 * @head: the beginning of the list
 * @index: the index which will be deleted
 * Return: 1(success), -1 (failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr;

	if (head == NULL || *head == NULL)
		return (-1);
	curr = *head;
	if (index == 0)
	{
		*head = curr->next;
		if (curr->next != NULL)
		{
			curr->next->prev = NULL;
		}
		free(curr);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (curr->next == NULL)
			return (-1);
		curr = curr->next;
	}
	curr->prev->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	free(curr);
	return (1);
}

