#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a alinked list
 * @head: pointer to the first element in the list
 * @n: data to insert
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *tem = *head;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (tem->next != NULL)
	{
		tem = tem->next;
	}
	tem->next = add;
	return (add);
}
