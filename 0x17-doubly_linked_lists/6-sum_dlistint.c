#include "lists.h"

/**
 * sum_dlistint - sums all the data of the list
 * @head: pointer to the beginning of the list
 * Return:the  sum, or 0 if it's empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
