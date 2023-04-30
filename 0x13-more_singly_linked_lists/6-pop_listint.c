#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head pointer
 * Return: the data inside the elements that was deleted
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *list;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	list = *head;
	*head = list->next;
	n = list->n;
	free(list);
	return (n);
}
