#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head pointer
 */
void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head != NULL)
	{
		tem = head->next;
		free(head);
		head = tem;
	}
}
