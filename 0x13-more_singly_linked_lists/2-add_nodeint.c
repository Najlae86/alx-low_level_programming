#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;
	return (add);
}

